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

    // расчет общей стоимости
    double totalValue();

    // проверка наличия
    bool isAvailable();
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

int main() {
    setlocale(LC_ALL, "RU");

    Product p1;
    p1.Name("Телефон");
    p1.Price(19990);
    p1.Quantity(5);
    p1.show();

    cout << "Общая стоимость товара: " << p1.totalValue() << endl;
    cout << "Наличие товара: " << (p1.isAvailable() ? "В наличии" : "Нет в наличии") << endl;

    return 0;
}