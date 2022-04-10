#pragma once
#include <string>
#include "RidingAnimal.h"
#include <vector>

class Chat
{
public:
	Chat(string name);
	void add_member(RidingAnimal* a);
	void start() const;
	string get_name() const;
private:
	string m_name;
	vector <RidingAnimal*> members;
};

