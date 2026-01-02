#include <iostream>

using namespace std;

void countdown(int n) {

	if (n == 0) {

		return;

	}

	cout << n << " ";

	countdown(n - 1);
}

int main() {

	setlocale(LC_ALL, "RU");

	int number;

	cout << "¬ведите число: ";
	cin >> number;

	countdown(number);

	return 0;
}
