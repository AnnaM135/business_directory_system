#include <iostream>
#include "../headers/Organization.h"


void Organization::printInfo() {
    std::cout << "Organization name: " << name << std::endl;
    std::cout << "Organization type: " << type << std::endl;
}

double Organization::calculateAnnualBudget() {
    return monthlyBudget * 12;
}