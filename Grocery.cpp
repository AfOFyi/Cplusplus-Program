#include "Grocery.h"

Grocery::Grocery(string t_name, int t_frequency) {
	this->itemName = t_name;
	this->itemFrequency = t_frequency;

}

void Grocery::SetFrequency(int t_frequency) {
	this->itemFrequency = t_frequency;
}

void Grocery::SetName(string t_name) {
	this->itemName = t_name;
}