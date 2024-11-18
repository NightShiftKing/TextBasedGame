#include <SFML/Graphics.hpp>
#include<iostream>
#include "TextBox.h"
#include<Windows.h>
#include"Rooms.h"


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
    Rooms room(1); 

    // Narration text that displays at the top
    sf::Text NarraterText;
    NarraterText.setFont(Neuropol);
    NarraterText.setPosition(0, 0);
    NarraterText.setString("type 'south' then hit 'enter'");
    NarraterText.setCharacterSize(20);
    NarraterText.setFillColor(sf::Color::White);
    

    // start of gameloop
    while (window.isOpen())
    {
        // Event (input) section
        sf::Event event;
        
        std::cout << userText.getText().length() << std::endl; 

        while (window.pollEvent(event)) {
            switch (event.type) {

            case sf::Event::Closed:
                window.close();

            case sf::Event::TextEntered:
                userText.typedOn(event);
            }
        }
        if (userText.getUserResponse() == "south" && sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
            NarraterText.setString(room.getRoomDescription());
 

        }


        // Render Section
        window.clear(); // clear screen


     

        userText.draw(window);
        window.draw(NarraterText); 
        window.draw(line); 
        

        window.display(); // update the screen
    }

    return 0;
}