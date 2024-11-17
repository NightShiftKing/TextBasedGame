#pragma once

#include<SFML/Graphics.hpp>
#include<array>
#include <string>


class Player {
public:
	Player();
	void setHealth(int hp);
	int getHealth(); 

	void setAttackStrength(int AttackStrength);
	int getAttackStrength();

	std::array<std::string, 5> getInventory(); 


	void addItem(std::string Item);
	void removeItem(std::string Item);

	void setPlayerRoom(int room);
	int getPlayerRoom(); 
private:
	int health;
	int AttackStrength;
	int currentRoom; 
	std::array<std::string, 5> inventory; 
};