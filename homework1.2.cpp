#include <iostream>
#include <string>

using namespace std;

int main() {
	// Использование русской раскладки;
	setlocale(LC_ALL, "RU");

	// Создание переменной типа данных string для хранения имени;
	string username;

	// Запрос имени пользователя через консоль;
	cout << "Введите свое имя: ";
	cin >> username;

	 // Вывод приветствия через консоль;
	cout << "Здравствуйте " << username << "." << endl << "Чем я могу вам помочь?" << endl;

	return 0;
}