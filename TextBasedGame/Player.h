#pragma once

#include<SFML/Graphics.hpp>
#include<array>
#include <string>
#include<iostream>


class Player {
public:
	Player();
	void setHealth(int hp);
	int getHealth(); 

	void setAttackStrength(int AttackStrength);
	int getAttackStrength();

	std::string getInventory(); 
	bool hasItem(std::string item); 

	void addItem(std::string Item);
	void removeItem(std::string Item);

	void setPlayerRoom(int room);
	int getPlayerRoom(); 
private:
	int health;
	int AttackStrength;
	int currentRoom; 
	int inventorySize; 
	std::string inventory[5];  
};