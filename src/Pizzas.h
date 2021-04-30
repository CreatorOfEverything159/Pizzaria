#ifndef PIZZERIA_PIZZAS_H
#define PIZZERIA_PIZZAS_H

class Napoletana : public Pizza {
public: explicit Napoletana(int Size, int Salt, int Cheese) :
    Pizza("Napoletana", "Tomato sauce, mozzarella, oregano, anchovies.", Size, Salt, Cheese, 1000) {};
};

class Margherita : public Pizza {
public:
    explicit Margherita(int Size, int Salt, int Cheese) :
    Pizza("Margherita", "Tomato sauce, mozzarella and oregano.", Size, Salt, Cheese, 2000) {};
};

class Carbonara : public Pizza {
public:
    explicit Carbonara(int Size, int Salt, int Cheese) :
    Pizza("Carbonara", "Tomato sauce, mozzarella, parmesan, eggs, bacon.", Size, Salt, Cheese, 3000) {};
};

class Marinara : public Pizza {
public:
    explicit Marinara(int Size, int Salt, int Cheese) :
    Pizza("Marinara", "Tomato sauce, garlic and basil.", Size, Salt, Cheese, 4000) {};
};

#endif //PIZZERIA_PIZZAS_H
