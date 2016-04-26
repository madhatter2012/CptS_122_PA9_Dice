#include "VisibleDiceObject.h"

//constructor
VisibleDiceObject::VisibleDiceObject(Texture texture, Sprite sprite, string jpg, string dice_Image, int num)
{
	//nada?
}

//destructor
VisibleDiceObject::~VisibleDiceObject()
{
	//bleh
}

//primary dice function called from main or wrapper
void VisibleDiceObject::rollDice()
{
	for (int i = 0; i < 2; i++)
	{
		num = randomNumber();
		diceMenu(num);


	}
}

//random Number generating function
int VisibleDiceObject::randomNumber()
{
	srand(time(NULL));
	num = rand() % 11 + 2;
	return num;
}

//Switch Case Menu for Dice file loading choices
void VisibleDiceObject::diceMenu(int num)
{
	switch (num)
	{
	case 1:
		loadDiceFile(num);
		break;
	case 2:
		loadDiceFile(num);
		break;
	case 3:
		loadDiceFile(num);
		break;
	case 4:
		loadDiceFile(num);
		break;
	case 5:
		loadDiceFile(num);
		break;
	case 6:
		loadDiceFile(num);
		break;
	}
}

//file loading function
string VisibleDiceObject::loadDiceFile(int num)
{
	Texture texture;
	//std::ostringstream dice_Image;
	//dice_Image << num << ".jpg";

	string dice_Image = to_string(num) + jpg;
	
	if (!texture.loadFromFile(dice_Image))
	{
	//	return 42;
	}

	dice_Image;

}

//window creation
int VisibleDiceObject::windowCreation()
{
	RenderWindow renderWindow(VideoMode(800, 900), "War Games");

Event event; //Event File

Clock clock; //clock counting

Sprite sprite(texture);
sprite.setPosition(0, 0);

while (renderWindow.isOpen())
{
	//Event event;
	while (renderWindow.pollEvent(event))
	{

		if (event.type == Event::EventType::Closed)
			renderWindow.close();
	}

	//cout << "Elapsed time since previous frame (microseconds): " << clock.getElapsedTime().asMicroseconds() << endl;
	//clock.restart();

	renderWindow.clear(Color::White);
	//renderWindow.draw(text); //drawing text
	//renderWindow.draw(sprite);
	renderWindow.display();


//
//
//Texture texture2;
//if (!texture2.loadFromFile("dice2.jpg"))
//{
//	return 42;
//}
//Sprite sprite2(texture2);
//sprite2.setPosition(0, 0);