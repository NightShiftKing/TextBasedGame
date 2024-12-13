#pragma once

#include <SFML/Graphics.hpp>
#include <sstream>

// Constants for key codes
#define DELETE_KEY 8
#define ENTER_KEY 13
#define ESCAPE_KEY 27

class TextBox {
public:

    TextBox();
    TextBox(int size, sf::Color color);
    TextBox(const TextBox&);

    void setFont(sf::Font& font);
    void setPostion(float x, float y);

    void resetText();
    std::string getText();
    void draw(sf::RenderWindow& window);
    void typedOn(sf::Event input);

    std::string getUserResponse(); 
    void setUserResponse(std::string); 

private:
    sf::Text textbox;
    std::ostringstream text;
    std::string userResponse; 




    void inputLogic(int charTyped);
    void deleteLastChar();
};
