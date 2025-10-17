#include "main.h"

void task03() {
	const int maxSize = 30;
	int array[maxSize];

	int size;
	do {
		cout << "Введите размер массива (не больше 30): ";
		cin >> size;
	} while (size > maxSize || size <= 0);

	for (int i = 0; i < size; i++) {
		cout << "array[" << i << "]: ";
		cin >> array[i];
	}

	cout << "Изначальный массив: ";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	cout << "Отсортированный массив: ";
	for (int i = 0; i < size; i++) {
		if ((array[i] % 10 != 0) || (array[i] <= 0)) {
			cout << array[i] << " ";
		}
	}
	cout << endl;

	return;
}