#include "Point.h"
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0; // чисто виртуальная функция
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Гав!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Мяу!" << std::endl;
    }
};

int main() {
    Animal* myDog = new Dog(); // создание объекта Dog
    Animal* myCat = new Cat(); // создание объекта Cat

    myDog->makeSound(); // вызов метода для Dog
    myCat->makeSound(); // вызов метода для Cat

    delete myDog; // очистка памяти
    delete myCat; // очистка памяти

    return 0;
}