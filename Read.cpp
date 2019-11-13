#include "Read.h"

Read::Read()
{
	
	line = "";
	drinkName = "";
	ingredientName = "";
	stype = "";
	sprice = "";
	proof = 0;
	Recipe tempRecipe;

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

				
				tempRecipe.ingredientList.push_back(tempIngredient);

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
				{
					if (line == "End")
						break;

					else
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

Read::~Read()
{}

