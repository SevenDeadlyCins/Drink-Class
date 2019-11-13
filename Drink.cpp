#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Drink.h"
#pragma once
using namespace std;


//Implementation

Drink::Drink()
{}


Drink::~Drink()
{}

Drink::Drink(string drinkName, Recipe recip, string content)
{
	name = drinkName;
	rec = recip;
	alc_cont = content;
}
string Drink::getName()
{
	return name;
}

void Drink::setName(string drinkName)
{
	name = drinkName;
}

/*
void Drink::displayDrink()
{
	cout << name << " Recipe" << endl << endl;
	cout << "Required Materials:\n";
	rec.displayMaterials();
	cout << endl;
	cout << "Steps \n";
	rec.displayRecipe();
	cout << "Alcohol Content:\n";
	cout << alc_cont << endl << endl;
	rec.displayIngredients();
	
}
*/
