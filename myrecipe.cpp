#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Recipe.h"
#include "Ingredient.h"
#include "Drink.h"
#pragma once
using namespace std;

//Class implementation
Recipe::Recipe()
{}

Recipe::~Recipe()
{}

/*
void Recipe::addIngredient(Ingredient newIngredient)
{
	ingredientList.push_back(newIngredient);
}
*/

/*
void Recipe::addIngredient(Ingredient newIngredient)
{
	this.ingredientList.push_back(newIngredient);
}
*/

/*
int Recipe::getIngredientListSize()
{
	return ingredientList.size();
}
*/

void Recipe::displayMaterials()
{
	for (size_t i = 0; i < reqMaterials.size(); i++)
	{
		cout << "Material " << i + 1 << ": ";
		cout << reqMaterials[i] << endl;
	}
}

void Recipe::displayRecipe()
{
	for (size_t i = 0; i < recipeList.size(); i++)
	{
		cout << "Step " << i + 1 << ": ";
		cout << recipeList[i] << endl;
	}
	cout << endl;
}

void Recipe::displayIngredients()
{
	for (size_t i = 0; i < ingredientList.size(); i++)
	{
		cout << "Ingredient " << i + 1 << ": ";
		cout << ingredientList[i].getName() << endl;
	}
}
