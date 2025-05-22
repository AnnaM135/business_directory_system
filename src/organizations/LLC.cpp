#include <iostream>
#include "../headers/LLC.h"

void LLC::printInfo() {
    std::cout << "LLC Name: " << name << std::endl;
    for (size_t i = 0; i < owners.size(); ++i) {
        std::cout  << "Shareholders: " << owners[i] << std::endl;
    }
}

double LLC::calculateAnnualBudget() {
    return monthlyBudget * 12; 
}