#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <vector>
#include "../Corner Grocer/Grocery.h"
using namespace std;

void mainMenu(vector<Grocery>& t_vector, char *strings[]);
void printMenu(char *strings[], unsigned int t_numStrings, unsigned char t_width);
unsigned int getMenuChoice(unsigned int t_maxChoice);
string nCharString(size_t t_num, char t_char);


#endif // !FUNCTIONS_H