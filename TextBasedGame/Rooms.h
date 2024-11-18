#pragma once
#include <string>
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
	bool processInput(const std::string& input); 

private:
	int roomNumber;
	std::string description; 



};



