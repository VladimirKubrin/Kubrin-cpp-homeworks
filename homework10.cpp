#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "RU");

	int numbers[] = { 3,2,4 };

	int n = 3;

	int target = 6;

	cout << "Входные данные: numbers = ";
	for (int x : numbers) {

		cout << x << ", ";

	}

	cout << "" << target << endl;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {

			if (numbers[i] + numbers[j] == target) {

				cout << "Выходные данные: " << i << ", " << j << endl;

				return 0;

			}
		}
	}
}