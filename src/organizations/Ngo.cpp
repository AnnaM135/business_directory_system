#include <iostream>
#include "../headers/Ngo.h"

void NGO::printInfo() {
    Organization::printInfo();
    for (int i = 0; i < focusAreas.size(); ++i) {
        std::cout << "Focus Area: " << focusAreas[i] << std::endl;
    }
}
