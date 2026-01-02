#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int number;
	cout << "¬ведите число: ";
	cin >> number;

	if (number  < 0) {

		cout << "False";
		return 0;

	}

	int original = number;
	int reversed = 0;

	while (number != 0) {

		int digit = number % 10;
		reversed = reversed * 10 + digit;
		number /= 10;
	}

	if (reversed == original) {

		cout << "True";

	}

	else {

		cout << "False";

	}
}
