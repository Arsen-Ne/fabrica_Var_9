#include "Donkey.h"
#include <iostream>

Donkey::Donkey() {
	cout << "������� ������ ����" << endl;
	read_from_console();
}

string Donkey::get_info() const {
	return "�����";
}

string Donkey::run_into() const {
	return (m_speed > 3) ? RidingAnimal::run_into() : "�������� � ������ ������";
}

string Donkey::say() const {
	return "��... ���������...";
}

	

