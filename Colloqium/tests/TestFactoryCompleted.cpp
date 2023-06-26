#include <iostream>
#include <cassert>
#include "factory.h"

void testFactoryMethod() {
    ProductFactory* factory1 = new ClothingFactory();
    ProductFactory* factory2 = new FootwearFactory();

    assert(factory1->processOfCreation() == "создан элемент одежды");
    assert(factory2->processOfCreation() == "создан элемент обуви");

    cout << "Test complited";
}

int main() {
    testFactoryMethod();
    return 0;
}