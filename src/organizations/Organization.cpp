#include <iostream>
#include "../headers/Organization.h"


void Organization::printInfo() {
    std::cout << "Organization name: " << name << std::endl;
    std::cout << "Director: " << director << std::endl;
    std::cout << "Monthly Budget: $" << monthlyBudget << std::endl;
}

double Organization::calculateAnnualBudget() {
    return monthlyBudget * 12;
}