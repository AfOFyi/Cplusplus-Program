/*
* Name: Eli Herchick
* Date: April 20, 2025
* Purpose: Corner Grocer assignment under "Chada Tech"
* 
*/


#include "../Corner Grocer/Functions.h"
#include <fstream>
#include <iostream>
using namespace std;


int main() {
	vector<string> MENU_OPTIONS = { "Search for item", "List with frequency", "Histogram", "Exit Program" };
	char* CONVERTED_MENU_OPTIONS[4];
	ifstream listIS;				 // grocery list input file stream
	ofstream freqOS;				 // list frequency output file stream
	vector<Grocery> groceries;		 // Grocery vector to hold grocery names and counts
	string itemName;				 // buffer variable for vector and file creation

	// for loop over MENU_OPTIONS, convert each element to char*
	for (int i = 0; i < MENU_OPTIONS.size(); i++) {
		CONVERTED_MENU_OPTIONS[i] = &MENU_OPTIONS[i][0];
	}

	listIS.open("Grocery_List.txt"); // open input file
	if (!listIS.is_open()) {
		cout << "Could not open file Grocery_List.txt." << endl;
		return 1;
	}
	freqOS.open("frequency.dat");	 // open output file
	if (!freqOS.is_open()) {
		cout << "Could not open file frequency.dat." << endl;
	}

	listIS >> itemName; //get first item name
	while (!listIS.fail()) { //read until end of file
		bool itemFound = false;
		for (int i = 0; i < groceries.size(); i++) {
			if (groceries.at(i).GetName() == itemName) { // loop through vector, if item found:
				itemFound = true; // flag item as found
				groceries.at(i).SetFrequency(groceries.at(i).GetFrequency() + 1); //increment item frequency
			}
		}

		if (!itemFound) { // if item NOT found in vector:
			Grocery newItem = Grocery(itemName); // create new Grocery item, with name set to itemName
			groceries.push_back(newItem); // add newItem to vector
		}

		listIS.ignore(); //remove new line
		listIS.clear();  //clear any errors
		listIS >> itemName;
	}
	
	while (!freqOS.fail()) { // write to frequency output file
		for (int i = 0; i < groceries.size(); i++) {
			freqOS << groceries.at(i).GetName() << " " << groceries.at(i).GetFrequency() << endl;
		}
		freqOS.clear();
		break;
	}
	
	cout << "Please make a selection: " << endl;
	printMenu(CONVERTED_MENU_OPTIONS, 4, 40);
	mainMenu(groceries, CONVERTED_MENU_OPTIONS);

	listIS.close(); // close input file
	freqOS.close(); // close output file

	return 0;
}