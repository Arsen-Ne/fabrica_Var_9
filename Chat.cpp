#include "Chat.h"
#include <iostream>

Chat::Chat(string name) : m_name(name) {}

void Chat::add_member(RidingAnimal* a) 
{
	members.push_back(a);
}

void Chat::start() const
{
	cout << endl << "��� �������� ������� � ��� " << get_name() << endl;
	for (auto animal : members) {
		cout << "* " << animal->get_info() << " " << animal->run_into() << " � ��� * " << endl;
		cout << animal->get_name() << ": " << animal->say() << endl;
	}
}

string Chat::get_name() const
{
	return m_name;
}