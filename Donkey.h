#pragma once
#include "RidingAnimal.h"
class Donkey : public RidingAnimal
{
public:
	Donkey();
	string get_info() const override;
	string run_into() const override;
	string say() const override;
};

