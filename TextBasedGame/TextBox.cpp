#include "TextBox.h"


//  constructor
TextBox::TextBox(int size, sf::Color color) {
    textbox.setCharacterSize(size);
    textbox.setFillColor(color);
    textbox.setString("_"); 


}

// Set the font for the text box
void TextBox::setFont(sf::Font& font) {
    textbox.setFont(font);
}

// Set the position of the text box
void TextBox::setPostion(float x, float y) {
    textbox.setPosition(x,y);
}




// Get the current text from the text box
std::string TextBox::getText() {
    return text.str();
}

// Draw the text box to the window
void TextBox::draw(sf::RenderWindow& window) {
    window.draw(textbox);
}

// Handle user input
void TextBox::typedOn(sf::Event input) {
        int charTyped = input.text.unicode;
        if (charTyped < 128) {
            inputLogic(charTyped); 
            }
        }
    


// Process typed input
void TextBox::inputLogic(int charTyped) {
    if (charTyped != DELETE_KEY && charTyped != ENTER_KEY && charTyped != ESCAPE_KEY) {
        text << static_cast<char>(charTyped);
    } else if (charTyped == DELETE_KEY) {
        if (text.str().length() > 0) {
            deleteLastChar();
        }
    }
    textbox.setString(text.str() + "_");
}

// Delete the last character from the text box
void TextBox::deleteLastChar() {
    std::string t = text.str();
    text.str("");
    text << t.substr(0, t.length() - 1); // Use substr for efficiency
    textbox.setString(text.str());
}
