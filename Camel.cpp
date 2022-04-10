#include "Camel.h"
#include <iostream>

Camel::Camel() {}

string Camel::get_info() const {
	return "верблюд";
}
string Camel::say() const {
	return "молча плюнул в вашу сторону";
}
