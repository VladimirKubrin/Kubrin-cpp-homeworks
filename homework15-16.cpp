#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "RU");

    int cx = 2;

    int cy = -1;

    int r = 5;

    int x;

    int y;

    cout << "Входные даннеы (x, y):";

    cin >> x >> y;

    int distanceSquared = (x - cx) * (x - cx) + (y - cy) * (y - cy);

    int radiusSquared = r * r;

    cout << "Выходные данные:";

    if (distanceSquared < radiusSquared) {

        cout << "Точка внутри оркужности";

    }
    else if (distanceSquared > radiusSquared) {

        cout << "Точка вне окружности";

    }
    else {

        cout << "Точка на границе окружности";

    }

    return 0;

}