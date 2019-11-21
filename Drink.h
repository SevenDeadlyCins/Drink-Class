#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Recipe.h"
using namespace std;

//Class declaration
class Drink
{
private:
	string name;
	Recipe rec;
	string alc_cont;
	string description;
	friend class Read;

public:
	Drink();
	~Drink();
	Drink(string drinkName, Recipe recip, string content);
	//int calculate_alcohol();
	string getName();
	void setName(string drinkName);
	void displayDrink();
};
