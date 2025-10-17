#include "main.h"

int main() {
	int p;

	do {
		cout << "Введите номер задачи (-1 для выхода): ";
		cin >> p;

		switch (p) {
			case -1: cout << "Выход из программы."; break;
			default: cout << "Неверный номер.";
		}
	} while (p != -1);
}