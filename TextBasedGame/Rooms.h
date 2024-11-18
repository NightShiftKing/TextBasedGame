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
	 

 
	

private:
	
	std::string description; 



};



