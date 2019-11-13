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
//Recipe tempRecipe;
Recipe::Recipe()
{}

Recipe::~Recipe()
{}

/*
void Recipe::readRecipe()
{
	string line;
	string drinkName;
	ifstream fin;
	fin.open("File.txt");
	if (!fin)
		cout << "The input file can't be opened.\n";

	else
	{
		getline(fin, line);
		if (line == "Drink")
		{
			getline(fin, line);
			drinkName = line;

			while (getline(fin, line))
			{
				if (line == "End")
					break;

				else
					recipeList.push_back(line);
			}
		}
	}
}

void Recipe::displayRecipe()
{
	for(size_t i = 0; i < recipeList.size(); i++)
	{
		cout << "Step " << i + 1 << ": ";
		cout << recipeList[i] << endl;
	}
	cout << endl;
}

void Recipe::readMaterials()
{
	string line;
	ifstream fin;
	fin.open("File.txt");
	if (!fin)
		cout << "The input file can't be opened.\n";

	else
	{
		while(getline(fin, line))
		{	
			if (line == "Materials")
			{
				while (getline(fin, line))
				{
					if (line == "End")
						break;

					else
						reqMaterials.push_back(line);
				}
			}
		}
	}
}

void Recipe::displayMaterials()
{
	for (size_t i = 0; i < reqMaterials.size(); i++)
	{
		cout << "Material " << i + 1 << ": ";
		cout << reqMaterials[i] << endl;
	}
}

void Recipe::addIngredient(Ingredient newIngredient)
{
	ingredientList.push_back(newIngredient);
}

void Recipe::displayIngredients()
{
	for (size_t i = 0; i < ingredientList.size(); i++)
	{
		cout << "Ingredient " << i + 1 << ": ";
		cout << ingredientList[i].getName() << endl;
	}
}
*/

/*
void Recipe::addIngredient(Ingredient newIngredient)
{
	this.ingredientList.push_back(newIngredient);
}
*/

/*
void Recipe::readDrinks()
{

	string line;
	string drinkName;
	string ingredientName;
	string stype;
	type drinktype;
	string sprice;
	price dPrice;
	ifstream fin;
	int proof;

	fin.open("File.txt");

	if (!fin)
		cout << "The input file can't be opened.\n";

	else
	{




		while (!EOF)
		{
			getline(fin, line);
			if (line == "Drink")
			{
				getline(fin, line);
				drinkName = line;
			}

			getline(fin, line);
			while (line == "Ingredients")
			{
				
				getline(fin, line);
				ingredientName = line;
				getline(fin, line);
				stype = line;
				if (line == "liquid")
					drinktype = liquid;
				else
					drinktype = garnish;
				getline(fin, line);
				proof = stoi(line);
				getline(fin, line);
				sprice = line;
				if (line == "low")
					dPrice = low;
				else if (line == "mid")
					dPrice = mid;
				else
					dPrice = high;

				Ingredient tempIngredient(ingredientName, drinktype, proof, dPrice);


				tempRecipe.addIngredient(tempIngredient);

				getline(fin, line);

			}

			while (getline(fin, line))
			{
				if (line == "Materials")
				{
					while (getline(fin, line))
					{
						if (line == "End")
							break;

						else
							tempRecipe.reqMaterials.push_back(line);
					}
				}
			}

			getline(fin, line);
			if (line == "Steps")
			{
				while (getline(fin, line))
					if (line == "End")
						break;

					else
					{
						tempRecipe.recipeList.push_back(line);
					}

			}
			getline(fin, line);
			if (line == "Alcohol Content")
				getline(fin, line);
			Drink tempDrink(drinkName, tempRecipe, line);

		}






	}
}
*/

