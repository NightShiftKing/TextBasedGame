#include "Rooms.h"
#include <SFML/Graphics/Texture.hpp>


Rooms::Rooms() {
	



}

	



	


       



	std::string Rooms::getRoomDescription(int roomNumber) {
		if (roomNumber == 0) {
			description = "A company has hired you to fix the robots in the factory that have gone haywire. Most of the power in the building has gone out except for a few devices and emergency lights.  Press Enter to continue";
		}
		else if (roomNumber == 1) {
			description = "A receptionist desk as well as a couch in the corner of the room to act as a waiting area. going North leds to a doorway ";
		}


		else if (roomNumber == 2) {
			description = "The office space is very open and has 6 desks in 2 columns and 3 rows. However, it is very dark in the office space with the only lighting coming from one computer monitor by the west corner. \n There is a partially open door on the west wall of the office. ";
		}
		else if (roomNumber == 3) {
			description = "The monitor only shows a blank static screen however on the very cluttered desk you find a note that reads 'Password: 1234' ";
		}
		else if (roomNumber == 4) {
			description = "you have acquired a 'note' you may go back ";
		}
		else if (roomNumber == 5) {
			description = "You find one clean spot in the shape of a note that reads 'Password: 1234' on the cluttered desk. you can go back ";
		}


		else if (roomNumber == 6) {
			description = "you walk into a very dim hallway with the only light sources coming from the office computer and the bottom of the door on the west end. There is a shelf along the northern wall that seems to hold many photos of the company's workers. ";
		}
		else if (roomNumber == 7) {
			description = "at the top of the shelf there is a gold crown that has the words 'employee of the month' inscibed on it "; 
		}
		else if (roomNumber == 8) {
			description = "you have aquired a 'crown' you may go back ";   
		}
		else if (roomNumber == 9) {
			description = "the shelf looks more barren without the crown at the top, there is nothing else here, you may go back"; 
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
