#include "RidingAnimal.h"
#include "Camel.h"
#include "Donkey.h"
#include "Horse.h"
#include <cassert>
#include <iostream>

using namespace std;

RidingAnimal* RidingAnimal::create(RidingAnimalType type)
{
	RidingAnimal* b = nullptr;
	switch (type) {
	case RidingAnimalType::HORSE:
		b = new Horse();
		break;
	case RidingAnimalType::CAMEL:
		b = new Camel();
		break;
	case RidingAnimalType::DONKEY:
		b = new Donkey();
		break;
	default:
		assert(false);
	}
	return b;
}

RidingAnimal::RidingAnimal()
{
	read_from_console();
}

void RidingAnimal::read_from_console()
{
	string s;
	cout << "¬ведите им€: ";
	getline(cin, s);
	set_name(s);
	cout << "¬ведите скорость: ";
	getline(cin, s);
	set_speed(stoi(s));
}

string RidingAnimal::get_info() const {
	return "представитель неизвестного вида";
}

string RidingAnimal::run_into() const {
	return "забежал";
}

string RidingAnimal::get_name() const {
	return m_name;
}

void RidingAnimal::set_name(string name)
{
	m_name = name;
}

void RidingAnimal::set_speed(int speed)
{
	m_speed = speed;
}