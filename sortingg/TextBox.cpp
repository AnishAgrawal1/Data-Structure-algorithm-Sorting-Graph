#include "TextBox.h"

TextBox::TextBox()
{
	this->active = false;
	this->text.setFillColor(sf::Color::Red);
	this->rect.setFillColor(sf::Color::Blue);
}

void TextBox::render(sf::RenderTarget& target)
{
	target.draw(this->text);
}

void TextBox::setPosition(sf::Vector2f pos)
{
	this->rect.setPosition(pos);
	this->text.setPosition( pos.x + this->text.getGlobalBounds().width/2, pos.y + this->text.getGlobalBounds().height / 2);
}

void TextBox::setAttribute(std::string text, int size, sf::Font& font)
{
	this->text.setString(text);
	this->text.setCharacterSize(size);
	this->text.setFont(font);
	this->rect.setSize(sf::Vector2f(this->text.getGlobalBounds().width+20, this->text.getGlobalBounds().height + 20));
}

sf::FloatRect TextBox::getGlobalBounds()
{
	return this->rect.getGlobalBounds();
}

void TextBox::setColor(sf::Color color)
{
	this->text.setFillColor(color);
}

void TextBox::setString(std::string val)
{
	this->text.setString(val);
}

void TextBox::setActive()
{
	this->active = !this->active;
}

bool TextBox::isActive()
{
	return this->active;
}

void TextBox::setChange(std::string val)
{
	this->text.setString(this->text.getString() + val);
}

std::string TextBox::getString()
{
	return this->text.getString();
}


