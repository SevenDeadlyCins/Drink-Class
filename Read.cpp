#include "Read.h"
#include <fstream>
#include <map>
ifstream fin;

Read::Read()
{
	string line = "";
	string drinkName = "";
	string ingredientName = "";
	string stype = "";
	string sprice = "";
	int proof = 0;
	int alcContent;
	string abv;
	type drinktype;
	price dPrice;
	Recipe tempRecipe;

	ifstream fin;

	map<string, Drink> drinkMap;

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



			getline(fin, line);
			if (line == "Steps")
			{
				while (getline(fin, line))
				{
					if (line == "End")
					{
						break;
					}
					else
						tempRecipe.recipeList.push_back(line);
				}
			}


			getline(fin, line);
			if (line == "Alcohol Content")
			{
				getline(fin, line);
				alcContent = stoi(line);
			}

			

			if (alcContent == 0)
				abv = "Non-Alcoholic";

			else if (alcContent > 0 && alcContent < 10)
				abv = "Light";

			else if (alcContent > 10 && alcContent < 20)
				abv = "Medium";

			else if (alcContent > 20 && alcContent < 30)
				abv = "Strong";

			else
				abv = "Extremely Strong";


			Drink tempDrink(drinkName, tempRecipe, abv);

			drinkMap[drinkName] = tempDrink;

			drinkMap[drinkName].displayDrink();

			tempRecipe.ingredientList.clear();

			tempRecipe.reqMaterials.clear();

			tempRecipe.recipeList.clear();



		}
	}

}

Read::~Read()
{}

