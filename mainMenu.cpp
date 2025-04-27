#include "../Corner Grocer/Functions.h"
void mainMenu() {
    unsigned int userInput = 0;

    while (userInput != 4) {
        userInput = getMenuChoice(4);
        switch (userInput) {
        case 1:
            // menu function 1;
            // search and return frequency
            break;
        case 2:
            // menu function 2;
            // print list of all items with frequencies
            break;
        case 3:
            // menu function 3;
            // print histogram of all items
            break;
        default:
            // menu function 4 (also 0), defaults to quit
            break;
        }
    }
}