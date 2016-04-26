#include "VisibleDiceObject.h"

//constructor
VisibleDiceObject::VisibleDiceObject(int num)
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

//file loading function
int VisibleDiceObject::loadDiceFile(int num)
{
	Texture texture;
	if (!texture.loadFromFile("dice.jpg"))
	{
		return 42;
	}

	Sprite sprite(texture);
	sprite.setPosition(0, 0);

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



//
//
//Texture texture2;
//if (!texture2.loadFromFile("dice2.jpg"))
//{
//	return 42;
//}
//Sprite sprite2(texture2);
//sprite2.setPosition(0, 0);