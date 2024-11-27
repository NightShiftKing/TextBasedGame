#include "Player.h"

Player::Player() {
	 health = 10;
	 AttackStrength = 2;
	 inventorySize = 5; 
	 currentRoom = 0; 


}

void Player::setPlayerRoom(int room) {
	currentRoom = room; 
}

int Player::getPlayerRoom() {
	return currentRoom; 
}

void Player::setHealth(int hp) {
	hp = health;
}

int Player::getHealth() {
	return health; 
}

void Player::setAttackStrength(int AttackStrength) {
	this->AttackStrength = AttackStrength; 
}

int Player::getAttackStrength() {
	return AttackStrength; 
}



bool Player::hasItem(std::string item) {
	for (int i = 0; i < inventorySize; i++) {
		if (inventory[i] == item) {
			return true; // Item found
		}
	}
	return false; // Item not found
}

void Player::addItem(std::string Item) {
	for (int i = 0; i < inventorySize; i++) {
		if (inventory[i] == "") {
			inventory[i] = Item;
			break; 
		}
	}

}

void Player::removeItem(std::string Item) {
	for (int i = 0; i < inventorySize; i++) {
		if (inventory[i] == Item) {
			inventory[i] = "";
			break; 
		}
	}
}