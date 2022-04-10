#pragma once
#include <string>
using namespace std;

enum class RidingAnimalType {
	HORSE,
	CAMEL,
	DONKEY
};

class RidingAnimal
{
private:
	string m_name;
protected:
	int m_speed;
	void read_from_console();
public:	
	RidingAnimal();
	void set_speed(int);
	void set_name(string);
	virtual string say() const = 0 ;
	virtual string get_info() const;
	virtual string run_into() const;
	string get_name() const;
	static RidingAnimal* create(RidingAnimalType);
};


