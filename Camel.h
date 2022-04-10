#pragma once
#include "RidingAnimal.h"
class Camel : public RidingAnimal
{
public:
	Camel();
	string say() const override;
	string get_info() const override;
};
