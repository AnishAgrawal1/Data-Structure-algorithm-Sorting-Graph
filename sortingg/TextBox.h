#pragma once
#include <SFML/Graphics.hpp>
#include <string>
class TextBox
{
private:
	sf::Text text;
    sf::RectangleShape rect;
    bool active;
public:
    TextBox();
    typedef std::shared_ptr<TextBox> TextBoxptr;
    void render(sf::RenderTarget& target);
    void setPosition(sf::Vector2f pos);
    void setAttribute(std::string text, int size, sf::Font& font);
    sf::FloatRect getGlobalBounds();
    void setColor(sf::Color color);
    void setString(std::string val);
    void setActive();
    bool isActive();
    void setChange(std::string val);
    std::string getString();
};

