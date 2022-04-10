#include <Windows.h> 
#include "RidingAnimal.h"
#include "Camel.h"
#include "Donkey.h"
#include "Horse.h"
#include "Chat.h"


using namespace std;

int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Chat chat("Riding Animal Party");
	chat.add_member(RidingAnimal::create(RidingAnimalType::DONKEY));	
	chat.add_member(RidingAnimal::create(RidingAnimalType::HORSE));
	chat.add_member(RidingAnimal::create(RidingAnimalType::CAMEL));

	chat.start();
}