#pragma once


#include "SFML/include/SFML/Graphics.hpp"
#include "stdafx.h"
#include <iostream>

using namespace std;
using namespace sf;


class VisibleDiceObject
{
public:
	VisibleDiceObject(int num = 0);
	~VisibleDiceObject();

	void rollDice();

	int loadDiceFile(int num);

	int randomNumber();

	void diceMenu(int num);
	
	//void SetPosition(float x, float y);

private:
	//Sprite _sprite;
	//Image _image;
	//string _filename;
	//bool _isLoaded;
	int num = 0;
};

