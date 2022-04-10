#include "Donkey.h"
#include <iostream>

Donkey::Donkey() {}

string Donkey::get_info() const {
	return "ослик";
}

string Donkey::run_into() const {
	return (m_speed > 3) ? RidingAnimal::run_into() : "медленно и понуро забрел";
}

string Donkey::say() const {
	return "иа... ииииааааа...";
}

	

