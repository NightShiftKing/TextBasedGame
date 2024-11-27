#include "Rooms.h"
#include <SFML/Graphics/Texture.hpp>


Rooms::Rooms() {
	



}

	



	


       



std::string Rooms::getRoomDescription(int roomNumber) {
    switch (roomNumber) {
    case 0:
        description = "A company has hired you to fix the robots in the factory that have gone haywire. Most of the power in the building has gone out except for a few devices and emergency lights. Press Enter to continue";
        break;
    case 1:
        description = "A receptionist desk as well as a couch in the corner of the room to act as a waiting area. going North leds to a doorway";
        break;


    case 2:
        description = "The office space is very open and has 6 desks in 2 columns and 3 rows. However, it is very dark in the office space with the only lighting coming from one computer monitor by the west corner. \n There is a partially open door on the west wall of the office.";
        break;
    case 3:
        description = "The monitor only shows a blank static screen however on the very cluttered desk you find a note that reads 'Password: 1234'";
        break;
    case 4:
        description = "you have acquired a 'note' you may go back";
        break;
    case 5:
        description = "You find one clean spot in the shape of a note that reads 'Password: 1234' on the cluttered desk. you can go back";
        break;


    case 6:
        description = "you walk into a very dim hallway with the only light sources coming from the office computer and the bottom of a door on the west end. There is a shelf along the northern wall that seems to hold many photos of the company's workers.";
        break;
    case 7:
        description = "at the top of the shelf there is a gold crown that has the words 'employee of the month' inscibed on it";
        break;
    case 8:
        description = "you have aquired a 'crown' you may go back";
        break;
    case 9:
        description = "the shelf looks more barren without the crown at the top, there is nothing else here, you may go back";
        break;


    case 10:
        description = "In the dimly lit warehouse, worker robots move erratically, their lights flickering in chaos. Conveyor belts run wild, sending products crashing to the floor as the robots, with jerky movements and malfunctioning arms, knock into shelves and scatter materials. Sparks fly from malfunctioning circuits. \n There is a small door on the north side of the warehouse \n The door leading to the hallway is east. ";
        break;
    case 11:
        description = "Tucked behind a door on the north side of the warehouse, is a maintenance room. The space is cramped and cluttered, with shelves stocked full of spare parts, tools, and unopened boxes of equipment. A single overhead light flickers intermittently, casting long, shifting shadows across the room. \n go south to leave ";
        break;
    case 12:
        description = "";
        break;
    case 13:
        description = "";
        break;
    case 14:
        description = "";
        break;
    case 15:
        description = "";
        break;
    case 16:
        description = "";
        break;
    case 17:
        description = "";
        break;
    case 18:
        description = "";
        break;
    case 19:
        description = "";
        break;
    case 20:
        description = "";
        break;
    case 21:
        description = "";
        break;
    case 22:
        description = "";
        break;
    default:
        description = "Room description not available.";
        break;
    }
    return description;
}



	void GenerateLoot() {

	}

	void GenerateRoomba() {

	}

	void SpawnFerretRuler() {

	}
