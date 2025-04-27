#pragma once
#ifndef GROCERY
#define GROCERY_H
#include <string>
using namespace std;

class Grocery{
private:
	int itemFrequency;
	string itemName;
public:
	Grocery(string t_name = "NoName", int t_frequency = 1);
	void SetFrequency(int t_frequency);
	void SetName(string t_name);
	string GetName() const { return itemName; };
	int GetFrequency() const { return itemFrequency; };
};

#endif // !GROCERY_H