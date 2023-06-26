#pragma once

#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include "product.h"

using namespace std;

class Product {
public:
	virtual ~Product() {};
	virtual string info() = 0;
};

class Clothing : public Product {
public:
	string info() override {
		return "������� ������";
	}
};

class Footwear : public Product {
public:
	string info() override {
		return "������� �����";
	}
};

class Accessory : public Product {
public:
	string info() override {
		return "���������";
	}
};

#endif