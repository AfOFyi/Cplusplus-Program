#include "../Corner Grocer/Functions.h"

void printMenu(char* strings[], unsigned int t_numStrings, unsigned char t_width) {
    unsigned int i;

    std::cout << nCharString(t_width, '*') << std::endl;


    for (i = 0; i < t_numStrings; i++) {
        std::cout << "* " << i + 1 << " - " << strings[i];
        std::cout << nCharString((t_width - strlen(strings[i]) - 7), ' ') << "*" << std::endl;

        if (i != t_numStrings - 1) {
            std::cout << std::endl;
        } else {
            std::cout << nCharString(t_width, '*');
        }
    }
}