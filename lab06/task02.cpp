#include "main.h"

void task02() {
	const int size = 14;
	char array[size]{'�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�'};

	for (int i = 0; i < size; i++) {
		cout << array[i] << endl;
	}

	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	return;
}