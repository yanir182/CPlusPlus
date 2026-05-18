#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    string name;

public:
    Product(const string& name) : name(name) {}
    virtual void printInfo() = 0;
    virtual void calculatePrice() = 0;
};

class Book : public Product {
private:
    double price;

public:
    Book(const string& name, double price) : Product(name), price(price) {}

    void printInfo() override {
        cout << "Книга: " << name << ", Цена: $" << price << endl;
    }

    void calculatePrice() override {
        cout << "Цена книги \"" << name << "\" составляет $" << price << "." << endl;
    }
};

class CD : public Product {
private:
    double price;

public:
    CD(const string& name, double price) : Product(name), price(price) {}

    void printInfo() override {
        cout << "CD: " << name << ", Цена: $" << price << endl;
    }

    void calculatePrice() override {
        cout << "Цена CD \"" << name << "\" составляет $" << price << "." << endl;
    }
};

class DVD : public Product {
private:
    double price;

public:
    DVD(const string& name, double price) : Product(name), price(price) {}

    void printInfo() override {
        cout << "DVD: " << name << ", Цена: $" << price << endl;
    }

    void calculatePrice() override {
        cout << "Цена DVD \"" << name << "\" составляет $" << price << "." << endl;
    }
};

void showProducts() {
    Product* products[5];
    products[0] = new Book("Великий Гэтсби", 10.99);
    products[1] = new CD("Сборник хитов", 15.49);
    products[2] = new DVD("Начало", 19.99);
    products[3] = new Book("1984", 8.99);
    products[4] = new CD("Классическая симфония", 12.49);

    for (int i = 0; i < 5; ++i) {
        products[i]->printInfo();
        products[i]->calculatePrice();
    }

    for (int i = 0; i < 5; ++i) {
        delete products[i];  
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    showProducts();
    return 0;
}
