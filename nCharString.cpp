#include "../Corner Grocer/Functions.h"

std::string nCharString(size_t t_num, char t_char) {
    std::string outputString = "";

    if (t_num >= 0) {
        for (int i = 0; i < t_num; i++) {
            outputString += t_char;
        }
    }

    return outputString;
}