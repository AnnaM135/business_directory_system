#include <iostream>
#include "../headers/CJSC.h"

void CJSC::printInfo()
{
    Organization::printInfo();
    std::cout << "CJSC Shareholders:\n";
    for (const auto& pair : shareholders) {
        std::cout << "  " << pair.first << " - " << pair.second << "% shares" << std::endl;
    }
}