#include "Camel.h"
#include <iostream>

Camel::Camel() {
	cout << "������� ������ ��������" << endl;
	read_from_console();
}

string Camel::get_info() const {
	return "�������";
}
string Camel::say() const {
	return "����� ������ � ���� �������";
}
