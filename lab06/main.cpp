#include "main.h"

int main() {
	int p;

	do {
		cout << "������� ����� ������ (-1 ��� ������): ";
		cin >> p;

		switch (p) {
			case -1: cout << "����� �� ���������."; break;
			default: cout << "�������� �����.";
		}
	} while (p != -1);
}