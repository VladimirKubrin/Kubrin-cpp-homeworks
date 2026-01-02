#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string line = "LVIII";

    int result = 0;

    for (int i = 0; i < line.length(); i++) {

        if (line[i] == 'I') result += 1;

        else if (line[i] == 'V') result += 5;

        else if (line[i] == 'X') result += 10;

        else if (line[i] == 'L') result += 50;

        else if (line[i] == 'C') result += 100;

        else if (line[i] == 'D') result += 500;

        else if (line[i] == 'M') result += 1000;

    }

    for (int i = 0; i < line.length() - 1; i++) {

        if (line[i] == 'I' && (line[i + 1] == 'V' || line[i + 1] == 'X')) result -= 2;

        else if (line[i] == 'X' && (line[i + 1] == 'L' || line[i + 1] == 'C')) result -= 20;

        else if (line[i] == 'C' && (line[i + 1] == 'D' || line[i + 1] == 'M')) result -= 200;

    }

    cout << "Входные данные: line = " << line << endl;
    cout << "Выходные данные: " << result;

    return 0;
}