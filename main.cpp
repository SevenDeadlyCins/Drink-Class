#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
//#include "Recipe.h"
//#include "Drink.h"
#include "Read.h"
#include <fstream>
#include <string>


using namespace std;


int main()
{
	/*
	Recipe daq;
	daq.readRecipe();
	daq.readMaterials();
	Ingredient whiteRum("White Rum", liquid, 80, mid);
	Ingredient limeJuice("Lime Juice", liquid, 0, low);
	Ingredient simpleSyrup("Simple Syrup", liquid, 0, low);
	daq.addIngredient(whiteRum);
	daq.addIngredient(limeJuice);
	daq.addIngredient(simpleSyrup);

	Drink daquiri("Daquiri", daq, "Medium");

	daquiri.displayDrink();
	*/
	//Read files;

	string line = "";
	string drinkName = "";
	string ingredientName = "";
	string stype = "";
	string sprice = "";
	int proof = 0;
	type drinktype;
	price dPrice;
	Recipe tempRecipe;

	ifstream fin;

	fin.open("File.txt");

	if (!fin)
		cout << "The input file can't be opened.\n";

	else
	{
		while (!fin.eof())
		{
			getline(fin, line);

			if (line == "Drink")
			{
				getline(fin, line);
				drinkName = line;
			}

			getline(fin, line);
			while (line == "Ingredient")
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


				tempRecipe.ingredientList.push_back(tempIngredient);

				getline(fin, line);


			}

			getline(fin, line);
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
				//getline(fin, line);
			

			
			while (getline(fin, line))
			{
				if (line == "Steps")
				{
					while (getline(fin, line))
					{
						if (line == "End")
							break;

						else
							tempRecipe.recipeList.push_back(line);
					}
				}
			}
		
			getline(fin, line);
			if (line == "Alcohol Content")
				getline(fin, line);

			Drink tempDrink(drinkName, tempRecipe, line);

			cout << tempDrink.name << endl;
			for (size_t i = 0; i < tempDrink.rec.ingredientList.size(); i++)
			{
				cout << "Ingredient " << i + 1 << ": ";
				cout << tempDrink.rec.ingredientList[i].getName() << endl;
			}

			
			for (size_t i = 0; i < tempDrink.rec.reqMaterials.size(); i++)
			{
				cout << "Material " << i + 1 << ": ";
				cout << tempDrink.rec.reqMaterials[i] << endl;
			}


			//cout << tempDrink.rec.ingredientList.size() << tempDrink.rec.reqMaterials.size() << tempDrink.rec.recipeList.size();
			for (size_t i = 0; i < tempDrink.rec.recipeList.size(); i++)
			{
				cout << "Step " << i + 1 << ": ";
				cout << tempDrink.rec.recipeList[i] << endl;

			}
			cout << "Alcohol Content\n";
			cout << line << endl;
			
			


		}
	}

	return 0;
}


