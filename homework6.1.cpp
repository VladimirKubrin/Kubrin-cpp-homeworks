#include <iostream>

using namespace std;

int main(void) {

	setlocale(LC_ALL, "RU");
	
	int array[5];

	srand(time(0));
	for (int i = 0; i < 5; i++) {
		array[i] = rand() % 10 + 1;
		cout << array[i] << " ";
		
	}
	
	cout << endl;

	int max_array_element = array[0];

	for (int i = 0; i < 5; i++) {

		if (array[i] > max_array_element) {

			max_array_element = array[i];

		}

	}
	
	cout << "Максимальный элемент массива: " << max_array_element;

	return 0;

}