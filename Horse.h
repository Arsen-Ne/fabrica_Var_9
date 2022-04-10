#pragma once
#include "RidingAnimal.h"
class Horse :
    public RidingAnimal
{
private:
	string m_run_type;
	void read_run_type_console();
public:
	Horse();
	void set_run_type(string);
	string run_into() const override;
	string say() const override;	
};

