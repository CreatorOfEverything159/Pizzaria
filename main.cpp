#include <iostream>

#include "src/Pizza.h"
#include "src/Pizzas.h"
#include "src/Order.h"


using namespace std;

int main() {
//    Napoletana p1(25, 0, 0);
//
//    auto p = Pizza("asd", "afsdfsgdgf", 30, 1, 1, 1000);
//
//    cout << p.size << endl;
//    cout << p.name << endl;
//    cout << p.description << endl;
//    cout << p.price << endl;
//
//    cout << p1.size << endl;
//    cout << p1.name << endl;
//    cout << p1.description << endl;
//    cout << p1.price << endl;

    Order ord;
    ord.createOrder();
    cout << ord << endl;
    return 0;
}
