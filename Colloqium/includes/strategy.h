#pragma once

#ifndef STRATEGY_H
#define STRATEGY_H
#include <iostream>
#include "product.h"
#include "strategy.h"

using namespace std;

class DeliveryStrategy {
public:
	virtual ~DeliveryStrategy() {};
	virtual string deliveryOrder() const = 0;
};

class PostDeliveryStrategy : public DeliveryStrategy {
public:
	string deliveryOrder() const override {
		return "доставляется почтой";
	}
};

class CourierDeliveryStrategy : public DeliveryStrategy {
public:
	string deliveryOrder() const override {
		return "доставляется курьером";
	}
};

class SelfDeliveryStrategy : public DeliveryStrategy {
public:
	string deliveryOrder() const override {
		return "самовывозится";
	}
};

class Deliver {
public:
	Deliver(DeliveryStrategy* strategy) : deliveryStrategy(strategy) {};
	~Deliver() {};
	void setStrategy(DeliveryStrategy* strategy) {
		deliveryStrategy = strategy;
	}
	string delivery(Product* product) {
		return product->info() + " " + deliveryStrategy->deliveryOrder();
	}
private:
	DeliveryStrategy* deliveryStrategy;
};


#endif