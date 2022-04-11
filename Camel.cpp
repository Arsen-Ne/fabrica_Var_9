#include "Camel.h"
#include <iostream>

Camel::Camel() {
	cout << "¬ведите данные верблюда" << endl;
	read_from_console();
}

string Camel::get_info() const {
	return "верблюд";
}
string Camel::say() const {
	return "молча плюнул в вашу сторону";
}
