#include "Player.h"

Player::Player() {
	 health = 10;
	 AttackStrength = 2;
	 inventory.fill("");
	 currentRoom = 1; 


}

void Player::setPlayerRoom(int room) {
	room = currentRoom; 
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

std::array<std::string, 5> Player::getInventory(){
	return inventory; 
}

void Player::addItem(std::string Item) {
	for (int i = 0; i < sizeof(inventory); i++) {
		if (inventory[i] == "") {
			inventory[i] = Item;
		}
	}

}

void Player::removeItem(std::string Item) {
	for (int i = 0; i < sizeof(inventory); i++) {
		if (inventory[i] == Item) {
			inventory[i] = ""; 
		}
	}
}