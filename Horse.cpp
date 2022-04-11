#include "Horse.h"
#include <sstream>
#include <iostream>
using namespace std;

Horse::Horse()
{
	read_from_console();
}

void Horse::read_from_console() {
	cout << "������� ������ ������" << endl;
	RidingAnimal::read_from_console();
	read_run_type_console();
}

void Horse::read_run_type_console()
{
	string s;
	cout << "������� ��� ������ ������ (�������, �������� � ��): ";
	getline(cin, s);
	set_run_type(s);
}

void Horse::set_run_type(string type) 
{
	m_run_type = type;
}

string Horse::get_info() const {
	return "������";
}

string Horse::run_into() const {
	stringstream ss;
	ss << "�o ��������� " << RidingAnimal::m_speed << "��/� ";
	if (!m_run_type.empty()) {
		ss << m_run_type << " ";
	}
	ss << "���������";
	return ss.str();
}

string Horse::say() const {
	return "���� �����!";
}
