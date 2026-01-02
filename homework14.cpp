#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "RU");

    string words[] = { "flick", "chocolate", "adventure", "flick",  "sunshine"};

    const int size = 5;

    bool result[size];

    bool value = true;

    for (int i = 0; i < size; i++) {

        result[i] = value;

        if (words[i] == "flick") {

            value = !value;

        }
    }

    cout << "Выходные данные: [";

    for (int i = 0; i < size; i++) {

        if (result[i] == true) {

            cout << "true";

        }
        else {

            cout << "false";

        }
        if (i < size - 1) {

            cout << ", ";

        }
    }

    cout << "]";

    return 0;
}