#include "VisibleDiceObject.h"

//constructor
VisibleDiceObject::VisibleDiceObject(string newJpg, string newDice_Image, int newNum)
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
	for (int i = 1; i < 3; i++)
	{
		if (i == 1)
		{
			mNum = randomNumber();
			Texture& temp1 = diceMenu(mNum);
		}

		else if (i == 2)
		{
			mNum = randomNumber();
			Texture& temp2 = diceMenu(mNum);
		}

		else
			break;
	}
	createWindow(temp1, temp2);
}

//random Number generating function
int VisibleDiceObject::randomNumber()
{
	srand(time(NULL));
	mNum = rand() % 11 + 2;
	return mNum;
}

//Switch Case Menu for Dice file loading choices
 Texture& VisibleDiceObject::diceMenu(int mNum)
{
	switch (mNum)
	{
	case 1:
		Texture& temp = loadDiceFile(mNum);
		break;
	case 2:
		loadDiceFile(mNum);
		break;
	case 3:
		loadDiceFile(mNum);
		break;
	case 4:
		loadDiceFile(mNum);
		break;
	case 5:
		loadDiceFile(mNum);
		break;
	case 6:
		loadDiceFile(mNum);
		break;
	case 7:
		loadDiceFile(mNum);
		break;
	case 8:
		loadDiceFile(mNum);
		break;
	case 9:
		loadDiceFile(mNum);
		break;
	case 10:
		loadDiceFile(mNum);
		break;
	case 11:
		loadDiceFile(mNum);
		break;
	case 12:
		loadDiceFile(mNum);
		break;


	}
}

//file loading function
sf::Texture& VisibleDiceObject::loadDiceFile(int newNum)
{
	Texture mTexture;

	string dice_Image = to_string(newNum) + mJpg;
	
	if (!mTexture.loadFromFile(dice_Image))
	{
		//return 42;
	}

	 return mTexture;
}

//window creation
int VisibleDiceObject::createWindow(Texture& newTexture1, Texture& newTexture2)
{
	RenderWindow renderWindow(VideoMode(800, 900), "War Games");

	Event event; //Event File

	Clock clock; //clock counting

	Sprite mSprite1(newTexture1);
	mSprite.setPosition(0, 0);


	Sprite mSprite2(newTexture2);
	mSprite.setPosition(25, 25);

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
		renderWindow.draw(mSprite1);
		renderWindow.draw(mSprite2);
		renderWindow.display();

	}
}
//
//
//Texture texture2;
//if (!texture2.loadFromFile("dice2.jpg"))
//{
//	return 42;
//}
//Sprite sprite2(texture2);
//sprite2.setPosition(0, 0);