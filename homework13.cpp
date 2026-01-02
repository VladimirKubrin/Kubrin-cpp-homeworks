#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "RU");

    string line;

    cout << "Входные данные: line = ";
    cin >> line;

    int round = 0; 
    int square = 0; 
    int figure = 0; 

    for (int i = 0; i < line.length(); i++) {

        if (line[i] == '(') round++;

        else if (line[i] == ')') round--;

        else if (line[i] == '[') square++;

        else if (line[i] == ']') square--;

        else if (line[i] == '{') figure++;

        else if (line[i] == '}') figure--;

    }

    if (round == 0 && square == 0 && figure == 0) {
        cout << "Выходные данные: true";
    }
    else {
        cout << "Выходные данные: false";
    }

    return 0;
}