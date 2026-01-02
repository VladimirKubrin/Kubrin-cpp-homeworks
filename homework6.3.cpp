#include <iostream>

using namespace std;

int main(void) {

	setlocale(LC_ALL, "RU");

	string first_line, second_line;

	cout << "¬ведите первую строку: " << endl;
	cin >> first_line;

	cout << "¬ведите вторую строку: " << endl;
	cin >> second_line;

	cout << "–езультат: " << first_line + second_line;

	return 0;

}