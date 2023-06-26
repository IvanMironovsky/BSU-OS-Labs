#pragma once
#ifndef FACTORY_H
#define FACTORY_H
#include <iostream>
#include "product.cpp"

class ProductFactory {
public:
	virtual ~ProductFactory() {};
	virtual Product* createProduct() const = 0;
	string processOfCreation() const {
		Product* product = this->createProduct();
		return "создан " + product->info();
	}
};

class ClothingFactory : public ProductFactory {
public:
	Product* createProduct() const override {
		return new Clothing();
	}
};

class FootwearFactory : public ProductFactory {
public:
	Product* createProduct() const override {
		return new Footwear();
	}
};

class AccessoryFactory : public ProductFactory {
public:
	Product* createProduct() const override {
		return new Accessory();
	}
};

#endif