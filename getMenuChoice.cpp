#include "../Corner Grocer/Functions.h"

unsigned int getMenuChoice(unsigned int t_maxChoice) {
    unsigned int choice;
    bool isValid = false;

    while (isValid != true) {
        std::cin >> choice;
        if (choice >= 1 && choice <= t_maxChoice) {
            isValid = true;
        }
    }

    return choice;
}