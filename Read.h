#include <iostream>
#include "Drink.h"
#include "Ingredient.h"
#include "Recipe.h"
#include <fstream>
#include <vector>

class Read
{
private:
	string line;
	string drinkName;
	string ingredientName;
	string stype;
	type drinktype;
	string sprice;
	price dPrice;
	ifstream fin;
	int proof;


public:
	Read();
	~Read();

};

#pragma once
