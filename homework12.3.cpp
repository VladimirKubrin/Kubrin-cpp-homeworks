#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    void Name(string n);
    void Price(double p);
    void Quantity(int q);

  
    string getName();
    double getPrice();
    int getQuantity();


    void show();

    double totalValue();

    bool isAvailable();

    // продажа товара
    void sell(int amount);
};

void Product::Name(string n) {
    name = n;
}

void Product::Price(double p) {
    price = p;
}

void Product::Quantity(int q) {
    quantity = q;
}

string Product::getName() {
    return name;
}

double Product::getPrice() {
    return price;
}

int Product::getQuantity() {
    return quantity;
}

void Product::show() {
    cout << "Товар: " << name << endl;
    cout << "Цена: " << price << endl;
    cout << "Количество на складе: " << quantity << endl;
}

double Product::totalValue() {
    return price * quantity;
}

bool Product::isAvailable() {
    return quantity > 0;
}

void Product::sell(int amount) {
    if (amount > quantity) {
        cout << "Недостаточно товара! В наличии только " << quantity << " единиц." << endl;
        quantity = 0;
    }
    else {
        quantity -= amount;
        cout << "Продано " << amount << " единиц товара." << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Product p1;
    p1.Name("Телефон");
    p1.Price(19990);
    p1.Quantity(5);

    cout << "Исходные данные:" << endl;
    p1.show();

    cout << "\nОбщая стоимость: " << p1.totalValue() << endl;
    cout << "Наличие: " << (p1.isAvailable() ? "В наличии" : "Нет в наличии") << endl;

    p1.sell(2);
    cout << "После продажи:" << endl;
    p1.show();

    p1.sell(10);
    cout << "После попытки продажи:" << endl;
    p1.show();

    return 0;
}