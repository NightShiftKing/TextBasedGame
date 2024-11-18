#include <SFML/Graphics.hpp>
#include<iostream>
#include "TextBox.h"
#include<Windows.h>
#include"Rooms.h"
#include "Player.h"


int getMaxScreenWidth() {
    return GetSystemMetrics(SM_CXSCREEN);
}

int getMaxScreenHeight() {
    return GetSystemMetrics(SM_CYSCREEN);
}

int main()
{

 

 
    // create a window
    sf::RenderWindow window(sf::VideoMode(getMaxScreenWidth(), getMaxScreenHeight()), "TextBasedGame");
 

    // loads the cool lookin font
    sf::Font Neuropol;
    Neuropol.loadFromFile("C:\\Users\\NightShiftKing\\dev\\Fonts\\Neuropol.otf");

 




    // what the user types on
    TextBox userText(15 , sf::Color::White);
    userText.setFont(Neuropol);
    userText.setPostion(getMaxScreenWidth()/2, getMaxScreenHeight() /2 );



    // seperation
    sf::RectangleShape line;
    line.setSize(sf::Vector2f(getMaxScreenWidth(), 10));
    line.setPosition(0, getMaxScreenHeight() /2 - 10 );


    //Rooms test
    Rooms room = Rooms();  

    //create player finally
    Player player = Player(); 

    // Narration text that displays at the top
    sf::Text NarraterText;
    NarraterText.setFont(Neuropol);
    NarraterText.setPosition(0, 0); 
    NarraterText.setCharacterSize(20);
    NarraterText.setFillColor(sf::Color::White);
    

    // start of gameloop
    while (window.isOpen())
    {
        // Event (input) section
        sf::Event event;
        

        while (window.pollEvent(event)) {
            switch (event.type) {

            case sf::Event::Closed:
                window.close();

            case sf::Event::TextEntered:
                userText.typedOn(event);
            }

        }


        
            


            switch (room.getRoomNumber()) {
            case 1:
                
                NarraterText.setString(room.getRoomDescription(room.getRoomNumber()));
                if (userText.getUserResponse() == "go north") {
                    room.setRoomNumber(2);
                }
                break;
            case 2:
                
                NarraterText.setString(room.getRoomDescription(room.getRoomNumber()));
                if (userText.getUserResponse() == "go west") {
                    room.setRoomNumber(3);
                }
                else if (userText.getUserResponse() == "go south") {
                    room.setRoomNumber(1);
                }
                break;
            case 3:
                
                NarraterText.setString(room.getRoomDescription(room.getRoomNumber()));
                if (userText.getUserResponse() == "go west") {
                    room.setRoomNumber(4);
                }
                else if (userText.getUserResponse() == "go east") {
                    room.setRoomNumber(2);
                }
                break;
            case 4:
                
                NarraterText.setString(room.getRoomDescription(room.getRoomNumber()));
                if (userText.getUserResponse() == "go east") {
                    room.setRoomNumber(3);
                }
                else if (userText.getUserResponse() == "go north") {
                    room.setRoomNumber(5);
                }
                break;
            case 5:
                
                NarraterText.setString(room.getRoomDescription(room.getRoomNumber()));
                if (userText.getUserResponse() == "go south") {
                    room.setRoomNumber(4);
                }
                break;
            case 6:
                
                NarraterText.setString(room.getRoomDescription(room.getRoomNumber()));
                break;
            case 7:
                
                NarraterText.setString(room.getRoomDescription(room.getRoomNumber()));
                break;
            case 8:
                
                NarraterText.setString(room.getRoomDescription(room.getRoomNumber()));
                break;
            case 9:
                
                NarraterText.setString(room.getRoomDescription(room.getRoomNumber()));
                break;
            case 10:
                
                NarraterText.setString(room.getRoomDescription(room.getRoomNumber()));
                break;

            default:
                break;
            }
        
            std::cout << room.getRoomNumber() << std::endl; 


        // Render Section
        window.clear(); // clear screen


     

        userText.draw(window);
        window.draw(NarraterText); 
        window.draw(line); 
        

        window.display(); // update the screen
    }

    return 0;
}