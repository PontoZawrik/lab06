#include "main.h"

void task01() {
	const int size = 14;
	int array[size];

	for (int i = 0; i < size; i++) {
		array[i] = getRandomInt(-5, 10);
		cout << array[i] << " ";
	}

	int sum = 0;
	int mul = 1;

	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			sum += array[i];
		}

		if (array[i] % 2 != 0) {
			mul *= array[i];
		}
	}

	cout << "\nСумма: " << sum << endl;
	cout << "Произведение: " << mul << endl;

	return;
}