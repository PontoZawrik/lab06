#include "main.h"

void task02() {
	const int size = 14;
	char array[size]{'ê', 'î', 'í', 'ò', 'ð', 'à', 'â', 'à', 'ð', 'è', 'é', 'í', 'û', 'é'};

	for (int i = 0; i < size; i++) {
		cout << array[i] << endl;
	}

	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	return;
}