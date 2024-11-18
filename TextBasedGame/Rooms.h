#pragma once
#include <string>
#include<SFML/Graphics.hpp>
class Rooms{
public:

	Rooms();
	void GenerateLoot();
	void GenerateRoomba();
	void SpawnFerretRuler();

	std::string getRoomDescription(int roomNumber); 
	 
	int getRoomNumber();
	void setRoomNumber(int currentRoomNumber);
	std::string startingMessage(); 
	

private:
	int roomNumber;
	std::string description; 



};



