#include "main.h"

void task06() {
	const int maxSize = 30;
	int array[maxSize];

	int size;
	do {
		cout << "������� ������ ������� (�� ������ 30): ";
		cin >> size;
	} while (size > maxSize || size <= 0);

	for (int i = 0; i < size; i++) {
		cout << "array[" << i << "]: ";
		cin >> array[i];
	}

	double div = 100000;

	cout << "\n������: \n";
	for (int i = 0; i < size; i++) {
		cout << "array[" << i << "] = " << array[i] << endl;

		div /= array[i] % 5 != 0 ? array[i] : 1;
	}

	cout << "������� 100000 / ... = " << div << endl;

	return;
}