#include <iostream>
#include <math.h>

using namespace std;

int main() {
	// Использование русской раскладки
	setlocale(LC_ALL, "RU");

	// Создаем перменную типа int для хранения числа
	int num;

	// Запрашиваем у пльзователя число
	cout << "Введите число: " << endl;
	// Сохраняем число из консоли в переменную num
	cin >> num;

	// Выводим в консоль квадрат и куб числа
	cout << "Квадрат числа: " << pow(num, 2) << endl;
	cout << "Куб числа: " << pow(num, 3) << endl;

	return 0;
}
