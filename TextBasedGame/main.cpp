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

void wrapText(sf::Text& text, float maxWidth) {
    std::string wrappedString;
    std::string currentLine;
    std::istringstream words(text.getString());
    std::string word;

    while (words >> word) {
        sf::Text tempText = text;
        tempText.setString(currentLine + (currentLine.empty() ? "" : " ") + word);

        if (tempText.getLocalBounds().width > maxWidth) {
            wrappedString += currentLine + "\n";
            currentLine = word;
        }
        else {
            currentLine += (currentLine.empty() ? "" : " ") + word;
        }
    }
    wrappedString += currentLine;
    text.setString(wrappedString);
}

int main()
{

 

 
    // create a window
    sf::RenderWindow window(sf::VideoMode(getMaxScreenWidth(), getMaxScreenHeight()), "TextBasedGame");
 

    // loads the cool lookin font
    sf::Font Neuropol;
    Neuropol.loadFromFile("C:\\Users\\797074\\Downloads\\neuropol\\Neuropol.otf");

 




    // what the user types on
    TextBox userText(25 , sf::Color::White);
    userText.setFont(Neuropol);
    userText.setPostion(10, getMaxScreenHeight() /2 + 230 );



    // seperation
    sf::RectangleShape line;
    line.setSize(sf::Vector2f(getMaxScreenWidth(), 10));
    line.setPosition(0, getMaxScreenHeight() /2 + 200 );


    //Rooms test
    Rooms room = Rooms();  

    //create player finally
    Player player = Player(); 

    // Narration text that displays at the top
    sf::Text NarraterText;
    NarraterText.setFont(Neuropol);
    NarraterText.setPosition(10, 0);
    NarraterText.setCharacterSize(30);
    NarraterText.setFillColor(sf::Color::White);


    // player test
    player.addItem("stick"); 
    
    

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


        switch (player.getPlayerRoom()) {
        case 0:

            NarraterText.setString(room.getRoomDescription(player.getPlayerRoom())); 
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
                player.setPlayerRoom(1); 
            }
            break; 
        case 1:

            NarraterText.setString(room.getRoomDescription(player.getPlayerRoom()));
            if (userText.getUserResponse() == "go north" || userText.getUserResponse() == "north") {
                player.setPlayerRoom(2);

            }
            break;
        case 2:

            NarraterText.setString(room.getRoomDescription(player.getPlayerRoom()));
            if ((userText.getUserResponse() == "check computer" || userText.getUserResponse() == "check the computer") && player.hasItem("note")){
                player.setPlayerRoom(5);
            }
            else if ((userText.getUserResponse() == "check computer" || userText.getUserResponse() == "check the computer") && !player.hasItem("note")){
                player.setPlayerRoom(3); 
            }

            else if (userText.getUserResponse() == "go south" || userText.getUserResponse() == "south") {
                player.setPlayerRoom(1);
            }
            else if (userText.getUserResponse() == "go west" || userText.getUserResponse() == "west") {
                player.setPlayerRoom(6); 
            }
            break;
        case 3:

            NarraterText.setString(room.getRoomDescription(player.getPlayerRoom()));
            if (userText.getUserResponse() == "take note" || userText.getUserResponse() == "grab note") {
               player.addItem("note");
               player.setPlayerRoom(4);

           } 
            else if(userText.getUserResponse() == "go back" || userText.getUserResponse() == "back") {
                player.setPlayerRoom(2); 
            }

            
            break;
        case 4:

            NarraterText.setString(room.getRoomDescription(player.getPlayerRoom()));
            if (userText.getUserResponse() == "go back" || userText.getUserResponse() == "back") {
                player.setPlayerRoom(2);
            }
            
 
            break;
        case 5:

            NarraterText.setString(room.getRoomDescription(player.getPlayerRoom()));
            if (userText.getUserResponse() == "go back" || userText.getUserResponse() == "back") {
                player.setPlayerRoom(2);
            }

            break;
        case 6:

            NarraterText.setString(room.getRoomDescription(player.getPlayerRoom()));
            if (userText.getUserResponse() == "go east" || userText.getUserResponse() == "east") {
                player.setPlayerRoom(2); 
            }
            else if (userText.getUserResponse() == "go north" || userText.getUserResponse() == "north") {
                player.setPlayerRoom(10); 
            }
            else if ((userText.getUserResponse() == "check shelf" || userText.getUserResponse() == "check the shelf") && !player.hasItem("crown")) {
                player.setPlayerRoom(7);
            }
            else if ((userText.getUserResponse() == "check shelf" || userText.getUserResponse() == "check the shelf") && player.hasItem("crown")) {
                player.setPlayerRoom(9);
            }
            break;
        case 7:

            NarraterText.setString(room.getRoomDescription(player.getPlayerRoom()));
            if (userText.getUserResponse() == "take crown" || userText.getUserResponse() == "grab crown") {
                player.addItem("crown");
                player.setPlayerRoom(8); 
            }
            break;
        case 8:

            NarraterText.setString(room.getRoomDescription(player.getPlayerRoom()));
            if (userText.getUserResponse() == "go back" || userText.getUserResponse() == "back") {
                player.setPlayerRoom(6); 
            }
            break;
        case 9:

            NarraterText.setString(room.getRoomDescription(player.getPlayerRoom()));
            if (userText.getUserResponse() == "go back" || userText.getUserResponse() == "back") {
                player.setPlayerRoom(6);
            }
            break;
        case 10:

            NarraterText.setString(room.getRoomDescription(player.getPlayerRoom()));
            if (userText.getUserResponse() == "go south" || userText.getUserResponse() == "south") {
                player.setPlayerRoom(6); 
            }
            else if (userText.getUserResponse() == "go east" || userText.getUserResponse() == "east") {
                player.setPlayerRoom(11); 
            }
            break;
        case 11:
            NarraterText.setString(room.getRoomDescription(player.getPlayerRoom()));
            if (userText.getUserResponse() == "go west" || userText.getUserResponse() == "west") {
                player.setPlayerRoom(10); 
            }
        default:
            break;
        }
         

         
            
        
            wrapText(NarraterText, getMaxScreenWidth()); 


        // Render Section
        window.clear(); // clear screen


     

        userText.draw(window);
        window.draw(NarraterText); 
        window.draw(line); 
        

        window.display(); // update the screen
    }

    return 0;
}