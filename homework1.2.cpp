#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");


	string username;

	cout << "Введите свое имя: ";
	cin >> username;

	cout << "Здравствуйте " << username << "." << endl << "Чем я могу вам помочь?" << endl;

	return 0;
}