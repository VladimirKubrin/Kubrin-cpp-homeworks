#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    // установка значений
    void Name(string n);
    void Price(double p);
    void Quantity(int q);

    // получения значений
    string getName();
    double getPrice();
    int getQuantity();

    // вывод
    void show();
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

int main() {
    setlocale(LC_ALL, "RU");

    Product p1;
    p1.Name("Телефон");
    p1.Price(19990);
    p1.Quantity(5);
    p1.show();

    return 0;
}