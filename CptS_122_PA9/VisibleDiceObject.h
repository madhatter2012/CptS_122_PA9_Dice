#pragma once


#include "SFML/include/SFML/Graphics.hpp"
#include "stdafx.h"
#include <iostream>

using namespace std;
using namespace sf;


class VisibleDiceObject
{
public:
	VisibleDiceObject(Texture texture, Sprite sprite, string = "jpg", string dice_Image = "", int num = 0);
	~VisibleDiceObject();

	void rollDice();

	string loadDiceFile(int num);

	int randomNumber();

	void diceMenu(int num);
	
	int windowCreation();

	//void SetPosition(float x, float y);

private:
	//Sprite _sprite;
	//Image _image;
	//string _filename;
	//bool _isLoaded;
	Texture texture;
	Sprite sprite;
	int num = 0;
	string jpg = "jpg";
	string dice_Image = "";
};

