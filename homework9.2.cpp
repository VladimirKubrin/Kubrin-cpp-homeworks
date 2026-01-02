#include <iostream>

using namespace std;

void changeSings(int& a, int& b) {

	a = -a;
	b = -b;

}

int main() {

	setlocale(LC_ALL, "RU");

	int a, b;

	cout << "Введите первое число: ";
	cin >> a;

	cout << "Введите первое число: ";
	cin >> b;

	changeSings(a, b);

	cout << "После изменения знаков: " << a << " " << b;

	return 0;
}