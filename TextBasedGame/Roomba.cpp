#include "Roomba.h"


Roomba::Roomba(){
	health = 20;
	attackStrength = 1; 
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

std::string Roomba::battle(Player p, TextBox userText, bool randomGen){
	ongoing_battle = true;
	description = "You encounter a roomba, it bolts right towards you while shooting electricity, what do you do? attack, dodge, run";
	int option{};

	//std::cout << "in function" << std::endl; 
	while (p.getHealth() > 0 || health > 0 || ongoing_battle) {
		
		std::cout << "player " << p << std::endl;

		if (userText.getUserResponse() == "attack") {
			option = 1;
			std::cout << "attack" << std::endl;
		}
		if (userText.getUserResponse() == "dodge") {
			option = 2;
		}
		if (userText.getUserResponse() == "run") {
			option = 3;
		}
		else {
			std::cout << "no answer" << std::endl;
		}


		switch (option) {
		case 1:
			if (p.hasItem("wrench")) {
				description = "the roomba winces as you take a swing at it and deal " + std::to_string(p.getAttackStrength()) + " damage";
				setHealth(getHealth() - p.getAttackStrength());
				// needs to have a value to get out of case. 
				std::cout << "in loop" << std::endl;



			}
			else {
				description = "You go to punch at the roomba however it gives you a painful shock as you hit it. you take " + std::to_string(attackStrength);
				p.setHealth(p.getHealth() - attackStrength);
				userText.setUserResponse("potato");

			}

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
			if (randomGen) {
				;


			}
			else if (!randomGen) {
				description = " You try to run however you were not fast enough. You take " + std::to_string(attackStrength);
			}
		default:
			description = "You encounter a roomba, it bolts right towards you while shooting electricity, what do you do? attack, dodge, run";
			break;
		}
		return description;
	}
	}




