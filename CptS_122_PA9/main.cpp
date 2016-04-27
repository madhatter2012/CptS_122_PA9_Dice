#include "stdafx.h"
#include "VisibleDiceObject.h"


using namespace sf;
using namespace std;

int main(int argc, char** argv)
{

	/*
	RenderWindow renderWindow(VideoMode(800, 900), "War Games");

	Event event; //Event File

	Clock clock; //clock counting
	*/

	VisibleDiceObject dice;
	//dice.createWindow();
	dice.rollDice();

	/*	
	Texture texture;
	if (!texture.loadFromFile("dice2.jpg"))
	{
		return 42;
	}

	Sprite sprite(texture);
	sprite.setPosition(0, 0);
	*/


	/*
	Font font; //Font File
	//boolean that returns font loading succcess
	if (!font.loadFromFile("calibri.ttf"))
	{
		return 42;
	}

	//Creating Text
	Text text("War Games", font, 64);
	text.setColor(Color::Red);
	
	
	//setting text to middle of screen
	FloatRect bounds(text.getLocalBounds());
	text.setPosition(renderWindow.getSize().x / 2 - (bounds.left + bounds.width / 2),
		renderWindow.getSize().y/2 - (bounds.top + bounds.height / 2));
		*/

	/*
	//checks for more events until window is closed
	while (renderWindow.isOpen())
	{
		//Event event;
		while (renderWindow.pollEvent(event))
		{

			if (event.type == Event::EventType::Closed)
				renderWindow.close();
		}

		cout << "Elapsed time since previous frame (microseconds): " << clock.getElapsedTime().asMicroseconds() << endl;
		clock.restart();

		renderWindow.clear(Color::White);
		//renderWindow.draw(text); //drawing text
		renderWindow.draw(sprite);
		renderWindow.draw(sprite2);
		renderWindow.display();
		
	}
	*/
	//system("pause");

	return 0;
}