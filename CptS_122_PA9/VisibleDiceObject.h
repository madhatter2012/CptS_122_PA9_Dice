#pragma once


#include "SFML/include/SFML/Graphics.hpp"
#include "stdafx.h"
#include <iostream>

using namespace std;
using namespace sf;


class VisibleDiceObject
{
public:
	VisibleDiceObject(Texture& newTexture1, Texture& newTexture2 = , string newJpg = "jpg", string newDice_Image = "", 
		int newNum = 0);

	~VisibleDiceObject();

	void rollDice();

	Texture& loadDiceFile(int newNum);

	int randomNumber();

	Texture& diceMenu(int newNum);
	
	int createWindow(Texture& newTexture1, Texture& newTexture2);
	//void SetPosition(float x, float y);

private:
	//Sprite _sprite;
	//Image _image;
	//string _filename;
	//bool _isLoaded;
	Texture mTexture;
	Sprite mSprite;
	int mNum;
	string mJpg;
	string mDice_Image;
	Texture& temp1;
	Texture& temp2;
};
