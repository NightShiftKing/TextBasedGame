#pragma once
#include <string>
class Rooms{
public:

	Rooms(int room);
	void GenerateLoot();
	void GenerateRoomba();
	void SpawnFerretRuler();

	std::string getRoomDescription(); 
	 
private:
	int roomNumber;
	std::string description; 



};

