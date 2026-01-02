#include <iostream>

using namespace std;

int minValue(int a, int b) {

	if (a > b) {

		return b;

	}
	
	else {
		
		return a;

	}

}

int main() {

	setlocale(LC_ALL, "RU");

	int number1, number2;

	cout << "Введите первое число: " << endl;
	cin >> number1;

	cout << "Введите второе число: " << endl;
	cin >> number2;

	int result = minValue(number1, number2);

	cout << "Минимум: " << result;

	return 0;

}