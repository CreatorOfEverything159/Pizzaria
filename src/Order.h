#ifndef PIZZERIA_ORDER_H
#define PIZZERIA_ORDER_H

#include "string"
#include "vector"

using namespace std;

class Order {
public:
    vector <Pizza> order;
    int sum;

    Order() {
        order = {};
        sum = 0;
    }

    void createOrder() {
        int command;

        do {
            cout << "1) Napoletana" << endl;
            cout << "2) Margherita" << endl;
            cout << "3) Carbonara" << endl;
            cout << "4) Marinara" << endl;
            cout << "Enter 1-4 to select pizza or 0 to order: ";
            cin >> command;
            cout << endl;

            if (command >= 1 && command <= 4) {
                addPizza(command);
            }
            else if (command == 0) {
                break;
            }
        } while (command != 0);
    }

    void addPizza(int pizzaNumber) {
        int pizzaSize, pizzaSalt, pizzaCheese;

        do {
            cout << "1) 25" << endl;
            cout << "2) 30" << endl;
            cout << "3) 35" << endl;
            cout << "4) 40" << endl;
            cout << "Enter 1-4 to choose pizza size: ";
            cin >> pizzaSize;
            cout << endl;
        } while (!(pizzaSize >= 1 && pizzaSize <= 4));

        do {
            cout << "Choose salt (0-10): ";
            cin >> pizzaSalt;
        } while (!(pizzaSalt >= 0 && pizzaSalt <= 10));

        do {
            cout << "Choose cheese (0-10): ";
            cin >> pizzaCheese;
        } while (!(pizzaCheese >= 0 && pizzaCheese <= 10));

        switch (pizzaNumber) {
            case 1 : order.push_back(Napoletana(pizzaSize, pizzaSalt, pizzaCheese)); break;
            case 2 : order.push_back(Margherita(pizzaSize, pizzaSalt, pizzaCheese)); break;
            case 3 : order.push_back(Carbonara(pizzaSize, pizzaSalt, pizzaCheese)); break;
            case 4 : order.push_back(Marinara(pizzaSize, pizzaSalt, pizzaCheese)); break;
        }

        sum += order.back().calculatePrice();
    }

    friend std::ostream &operator << (std::ostream &out, const Order &o) {
        cout << endl;
        cout << "YOUR ORDER: " << endl;
        cout << "----------------------------------------" << endl;
        if (o.order.size() == 0) {
            cout << "Your oreder is empty!" << endl;
        } else {
            for (int i = 0; i < o.order.size(); ++i) {
                cout << i + 1 << ") position" << endl;
                cout << "Name: " << o.order[i].name << endl;
                cout << "Description: " << o.order[i].description << endl;
                cout << "Size: " << o.order[i].size << endl;
                cout << "Cheese: " << o.order[i].cheese << endl;
                cout << "Salt: " <<  o.order[i].salt << endl;
                cout << "Price: " << o.order[i].price << endl;
                cout << "----------------------------------------" << endl;
            }
            cout << "TOTAL: " << o.sum;
        }
        return out;
    }
};

#endif //PIZZERIA_ORDER_H
