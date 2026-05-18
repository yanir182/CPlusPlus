#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
#include <vector>

using namespace std;

class OrderState {
public:
    virtual void nextState() = 0;
    virtual void previousState() = 0;
    virtual string getState() = 0;
};

class CreatedState : public OrderState {
public:
    void nextState() override {
        cout << "Заказ оплачен." << endl;
    }

    void previousState() override {
        cout << "Заказ уже в состоянии 'Создан'." << endl;
    }

    string getState() override {
        return "Создан";
    }
};

class PaidState : public OrderState {
public:
    void nextState() override {
        cout << "Заказ отправлен." << endl;
    }

    void previousState() override {
        cout << "Возврат к состоянию 'Создан'." << endl;
    }

    string getState() override {
        return "Оплачен";
    }
};

class ShippedState : public OrderState {
public:
    void nextState() override {
        cout << "Заказ доставлен." << endl;
    }

    void previousState() override {
        cout << "Возврат к состоянию 'Оплачен'." << endl;
    }

    string getState() override {
        return "Отправлен";
    }
};

class DeliveredState : public OrderState {
public:
    void nextState() override {
        cout << "Заказ уже доставлен." << endl;
    }

    void previousState() override {
        cout << "Возврат к состоянию 'Отправлен'." << endl;
    }

    string getState() override {
        return "Доставлен";
    }
};

class Order {
private:
    OrderState* currentState;

public:
    Order(OrderState* state) : currentState(state) {}

    void setState(OrderState* state) {
        currentState = state;
    }

    void nextState() {
        currentState->nextState(); 
        if (currentState->getState() == "Создан") {
            setState(new PaidState());
        }
        else if (currentState->getState() == "Оплачен") {
            setState(new ShippedState());
        }
        else if (currentState->getState() == "Отправлен") {
            setState(new DeliveredState());
        }
    }

    void previousState() {
        currentState->previousState();
        if (currentState->getState() == "Оплачен") {
            setState(new CreatedState());
        }
        else if (currentState->getState() == "Отправлен") {
            setState(new PaidState());
        }
        else if (currentState->getState() == "Доставлен") {
            setState(new ShippedState());
        }
    }

    string getCurrentState() {
        return currentState->getState();
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    CreatedState created;
    Order order(&created);

    cout << "Текущее состояние заказа: " << order.getCurrentState() << endl;
    order.nextState(); 
    cout << "Текущее состояние заказа: " << order.getCurrentState() << endl;
    order.nextState(); 
    cout << "Текущее состояние заказа: " << order.getCurrentState() << endl;
    order.nextState(); 
    cout << "Текущее состояние заказа: " << order.getCurrentState() << endl;


    order.previousState();
    cout << "Текущее состояние заказа: " << order.getCurrentState() << endl;

    return 0;
}

/*
Паттерн "Состояние" — это способ проектирования программного обеспечения, который позволяет объектам менять свое поведение в зависимости от их состояния.
Вот простое объяснение:

Состояние объекта: Каждое состояние объекта (например, заказ в интернет-магазине) может определять, как этот объект должен себя вести в данный момент. Например, заказ может быть "Создан", "Оплачен", "Отправлен" или "Доставлен".

Поведение меняется: В зависимости от того, в каком состоянии находится объект, его действия и реакции меняются. Например, если заказ в состоянии "Оплачен", он может "отправиться". Но если он в состоянии "Создан", его нельзя отправить.

Разделение логики: Вместо того чтобы писать весь код для управления логикой состояния в одном месте, мы переносим эту логику в отдельные классы, которые представляют каждое состояние. Это делает код более организованным и легким для понимания.

Упрощение управления: Когда объект меняет состояние, он просто уведомляет о смене состояния, а специальные классы обрабатывают соответствующие действия. Это облегчает понимание того, что происходит, и делает добавление новых состояний проще.
В целом, паттерн "Состояние" помогает структурировать код и управлять изменением поведения объектов в зависимости от их состояния, делая его более понятным и легким в обслуживании.
*/