#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int N;
    cout << "Введите размер массива (1-10): ";
    cin >> N;

    // Проверка ограничений
    if (N < 1 || N > 10) {
        cout << "Некорректный размер массива!" << endl;
        return 1;
    }

    int arr[10]; // Максимальный размер 10
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Введите число для поиска: ";
    cin >> x;

    // Поиск последнего вхождения
    int lastIndex = -1; 6;

    for (int i = 0; i < N; i++) {
        if (arr[i] == x) {
            lastIndex = i; // Обновляем индекс при каждом нахождении
        }
    }

    // Вывод результата
    if (lastIndex != -1) {
        cout << "Индекс последнего вхождения: " << lastIndex << endl;
    }
    else {
        cout << "Элемент не найден: -1" << endl;
    }

    return 0;
}