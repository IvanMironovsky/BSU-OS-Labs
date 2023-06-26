#include <iostream>
#include <cassert>
#include "strategy.h"

void testStrategy() {
    Deliver* deliver1 = new Deliver(new PostDeliveryStrategy);

    assert(deliver1->delivery(new Clothing) == "элемент одежды доставляется почтой");
    assert(deliver1->delivery(new Footwear) == "элемент обуви доставляется почтой");
    
    deliver1->setStrategy(new CourierDeliveryStrategy);

    assert(deliver1->delivery(new Footwear) == "элемент обуви доставляется курьером");

    cout << "Test complited";
}

int main() {
    testStrategy();
    return 0;
}