#pragma once
#include <string>
#include<SFML/Graphics.hpp>
class Rooms{
public:

	Rooms();
	void GenerateLoot();



	std::string getRoomDescription(int roomNumber);
	

 
	

private:
	
	std::string description; 



};



