#ifndef PIZZERIA_PIZZA_H
#define PIZZERIA_PIZZA_H

#include <utility>
#include <iostream>
#include "string"

using namespace std;

class Pizza {
public:
    string name;
    string description;
    int price;
    int sizes[4] = {25, 30, 35, 40};
    int size;
    int salt;
    int cheese;

    explicit Pizza(string Name, string Description, int Size, int Salt, int Cheese, int Price) {
        name = Name;
        description = Description;
        size = sizes[Size - 1];
        salt = Salt * 2;
        cheese = Cheese * 4;
        price = Price / 100 * size;
    }

    int calculatePrice() {
        return price + salt + cheese;
    }
};

#endif //PIZZERIA_PIZZA_H
