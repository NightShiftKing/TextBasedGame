#include "Rooms.h"


	Rooms::Rooms(int roomNumber) {


		switch (roomNumber)
		{
		case 1:
			description = "1"; 
			break;
		case 2:
			description = "2";
			break;
		case 3:
			description = "3";
			break;
		case 4:
			description = "4";
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
