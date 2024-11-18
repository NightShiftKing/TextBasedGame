#include "Rooms.h"


	Rooms::Rooms(int roomNumber) {


		switch (roomNumber)
		{
		case 1:
			description = "A receptionist desk as well as a couch in the corner of the room to act as a waiting area. There is a doorway leading North"; 
			break;
		case 2:
			description = "The office space is very open and has 6 desks in 2 columns and 3 rows. However, it is very dark in the office space with the only lighting coming from one computer monitor by the northwest corner. ";
			break;
		case 3:
			description = "The hallway is very dim with the only light sources coming from the office computer and the bottom of the door on the west end. ";
			break;
		case 4:
			description = "In the dimly lit warehouse, worker robots move erratically, their lights flickering in chaos. Conveyor belts run wild, sending products crashing to the floor as the robots, with jerky movements and malfunctioning arms, knock into shelves and scatter materials. Sparks fly from malfunctioning circuits.";
			break;
		case 5:
			description = "5";
			break;
		case 6:
			description = "6";
			break;
		case 7:
			description = "7";
			break;
		case 8:
			description = "8";
			break;
		case 9:
			description = "9";
			break;
		case 10:
			description = "10";
			break;

		
		}



	}


	std::string Rooms::getRoomDescription() {
		return description;
	}

	void GenerateLoot() {

	}

	void GenerateRoomba() {

	}

	void SpawnFerretRuler() {

	}
