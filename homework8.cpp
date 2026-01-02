#include <iostream>;
#include <string>;

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	string line;
	cout << "Введите строку: " << endl;
	getline(cin,line);

	cout << "Вы ввели строку: " << line << endl;

	bool isIsogram = true;

	for (int i = 0; i < line.length(); i++) {

		if (line[i] == ' ') {
			continue;
		}

		for (int j = i + 1; j < line.length(); j++) {

			if (tolower(line[i]) == tolower(line[j])) {

				isIsogram = false;
				break;

			}

		}

		if (isIsogram == false) {

			break;

		}

	}

	cout << boolalpha << isIsogram;

}