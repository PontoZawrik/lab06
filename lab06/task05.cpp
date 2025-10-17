#include "main.h"

void task05() {
	const int size = 1288;
	int array[size];

	cout << "\nИзначальный массив: \n";

	for (int i = 0; i < size; i++) {
		array[i] = getRandomInt(-15, 5);
		cout << array[i] << " ";
	}

	cout << endl;


	cout << "\nОтсортированный массив: \n";

	for (int i = 0; i < size; i++) {
		if ((i > 49) && (i % 6 == 0)) {
			cout << array[i] << " ";
		}
	}

	cout << endl;

	return;
}