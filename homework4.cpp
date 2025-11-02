#include <iostream>

using namespace std;

int main() {

	// Использование русской раскладки
	setlocale(LC_ALL, "RU");

	// Создание переменной типа double
	double num;

	// Запрос у пользователя числа и сохранение его в переменную
	cout << "Введите число c плавающей точкой: ";
	cin >> num;

	// Вывод как double
	cout << "Как double: " << num << endl;

	// Перевод в тип int и вывод числа
	int numInt = num;
	cout << "Как int: " << numInt << endl;

	// Перевод в тип bool и вывод ответа
	bool numBool = num;
	cout << boolalpha;
	cout << "Число не равно 0?" << endl << numBool;

	return 0;
}
