#include "Rooms.h"
#include <SFML/Graphics/Texture.hpp>


Rooms::Rooms() {
	



}

	



	


       



	std::string Rooms::getRoomDescription(int roomNumber) {
		if (roomNumber == 0) {
			description = "A company has hired you to fix the robots in the factory that have gone haywire. Most of the power in the building has gone out except for a few devices and emergency lights.  Press Enter to continue";
		}
		else if (roomNumber == 1) {
			description = "A receptionist desk as well as a couch in the corner of the room to act as a waiting area. There is a doorway leading North";
		}
		else if (roomNumber == 2) {
			description = "The office space is very open and has 6 desks in 2 columns and 3 rows. However, it is very dark in the office space with the only lighting coming from one computer monitor by the west corner. \n There is a partially open door on the west wall of the office. ";
		}
		else if (roomNumber == 3) {
			description = "The hallway is very dim with the only light sources coming from the office computer and the bottom of the door on the west end. \n There is a shelf along the northern wall that seems to hold many photos of the company's workers.  ";
		}
		else if (roomNumber == 4) {
			description = "In the dimly lit warehouse, worker robots move erratically, their lights flickering in chaos. Conveyor belts run wild, sending products crashing to the floor as the robots, with jerky movements and malfunctioning arms, knock into shelves and scatter materials. Sparks fly from malfunctioning circuits. \n There is a small door on the north side of the warehouse \n The door leading to the hallway is east. ";
		}
		else if (roomNumber == 5) {
			description = "Tucked behind a door on the north side of the warehouse, is a maintenance room. The space is cramped and cluttered, with shelves stocked full of spare parts, tools, and unopened boxes of equipment. A single overhead light flickers intermittently, casting long, shifting shadows across the room. \n go south to leave ";
		}
		else if (roomNumber == 6) {
			description = "";
		}
		else if (roomNumber == 7) {
			description = "";
		}
		else if (roomNumber == 8) {
			description = "";
		}
		else if (roomNumber == 9) {
			description = "";
		}
		else if (roomNumber == 10) {
			description = "";
		}
		return description;
	}



	void GenerateLoot() {

	}

	void GenerateRoomba() {

	}

	void SpawnFerretRuler() {

	}
