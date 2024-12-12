#include "Roomba.h"


Roomba::Roomba(){
	health = 2;
	attackStrength = 10; 
	location = 0; 

}

void Roomba::GenerateRoomba(){

}

void Roomba::setHealth(int hp){
	health = hp;
}

int Roomba::getHealth(){

	return health;
}

void Roomba::setAttackStrength(int AttackStrength){
	attackStrength = AttackStrength;
}

int Roomba::getAttackStrength(){

	return attackStrength;
}

void Roomba::setLocation(int room){
	location = room; 
}

int Roomba::getLocation(){

	return location;
}

std::string Roomba::battleDescription(Player p, TextBox userText, bool randomGen){
	description = "You encounter a roomba, it bolts right towards you while shooting electricity, what do you do? attack, dodge, run";
	int option;
	if (userText.getUserResponse() == "attack") {
		option = 1;
	}
	if (userText.getUserResponse() == "dodge") {
		option = 2;
	}
	if (userText.getUserResponse() == "run") {
		option = 3;
	}

	switch (option){
	case 1:
		if (p.hasItem("wrench")) {
			description = "the roomba winces as you take a swing at it and deal " + std::to_string(p.getAttackStrength());
			health -= p.getAttackStrength();
		}
		else
			description = "You go to punch at the roomba however it gives you a painful shock as you hit it. you take " + std::to_string(attackStrength);
			p.setHealth(p.getHealth() - attackStrength);
		break;
	case 2:
		if (randomGen) {
			description = "You manage to swiftly side step out of the way. ";
		}
		else if (!randomGen) {
			description = "You try to move out of the way however you were not fast enough. You take " + std::to_string(attackStrength); 
		}
		break;
	case 3:
		switch (p.getPlayerRoom()){
		case 1:

		default:
			break;
		}
	default:
		break;
	}
	return description; 
}



