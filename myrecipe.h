#include <iostream>
#include <fstream>
#include <vector>
#include "Ingredient.h"
using namespace std;

#pragma once


//Class declaration
class Recipe
{
public:
	vector<string> recipeList;
	vector<string> reqMaterials;
	vector<Ingredient> ingredientList;
	friend class Read;


	Recipe();
	~Recipe();
	void readDrinkName();
	void readRecipe();
	void displayRecipe();
	void readMaterials();
	void displayMaterials();
	Recipe addIngredient(Ingredient newIngredient);
	void displayIngredients();
	void readDrinks();
};
