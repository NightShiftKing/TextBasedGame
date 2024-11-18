#pragma once
#include <string>
#include<SFML/Graphics.hpp>
class Rooms{
public:

	Rooms();
	void GenerateLoot();
	void GenerateRoomba();
	void SpawnFerretRuler();

	std::string getRoomDescription(int roomNumber, std::string userResponse);
	

 
	

private:
	
	std::string description; 



};



