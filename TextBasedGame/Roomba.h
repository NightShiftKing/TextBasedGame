#pragma once
#include "Player.h"
#include "TextBox.h"
#include <string>
#include<SFML/Graphics.hpp>
class Roomba{
public:

	Roomba();
	void GenerateRoomba(); 
	void setHealth(int hp);
	int getHealth();

	void setAttackStrength(int AttackStrength);
	int getAttackStrength();
	
	void setLocation(int room);
	int getLocation();
	std::string battleDescription(Player p, TextBox userText, bool randomGen);




private:

	std::string description;
	int health;
	int attackStrength;
	int location;





};

