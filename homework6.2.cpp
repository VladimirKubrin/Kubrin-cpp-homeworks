#include <iostream>

using namespace std;

int main(void) {

	setlocale(LC_ALL, "RU");

	int array[2][3];

	srand(time(0));
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {

			array[i][j] = rand() % 6 + 1;
			cout << array[i][j] << " ";

		}
		cout << endl;

	}

	return 0;

}