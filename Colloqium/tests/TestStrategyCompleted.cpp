#include <iostream>
#include <cassert>
#include "strategy.h"

void testStrategy() {
    Deliver* deliver1 = new Deliver(new PostDeliveryStrategy);

    assert(deliver1->delivery(new Clothing) == "������� ������ ������������ ������");
    assert(deliver1->delivery(new Footwear) == "������� ����� ������������ ������");
    
    deliver1->setStrategy(new CourierDeliveryStrategy);

    assert(deliver1->delivery(new Footwear) == "������� ����� ������������ ��������");

    cout << "Test complited";
}

int main() {
    testStrategy();
    return 0;
}