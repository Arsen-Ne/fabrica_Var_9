#include "Horse.h"
#include <sstream>
#include <iostream>
using namespace std;

Horse::Horse()
{
	read_from_console();
}

void Horse::read_from_console() {
	cout << "Введите данные лошади" << endl;
	RidingAnimal::read_from_console();
	read_run_type_console();
}

void Horse::read_run_type_console()
{
	string s;
	cout << "Введите как бегает лошадь (галопом, иноходью и тп): ";
	getline(cin, s);
	set_run_type(s);
}

void Horse::set_run_type(string type) 
{
	m_run_type = type;
}

string Horse::get_info() const {
	return "лошадь";
}

string Horse::run_into() const {
	stringstream ss;
	ss << "сo скоростью " << RidingAnimal::m_speed << "км/ч ";
	if (!m_run_type.empty()) {
		ss << m_run_type << " ";
	}
	ss << "врывается";
	return ss.str();
}

string Horse::say() const {
	return "Всем игого!";
}
