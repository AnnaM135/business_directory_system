#include <iostream>
#include "../headers/Foundation.h"

void Foundation::printInfo() 
{
    // Organization::printInfo();
    std::cout << "Foundation Name: " << name << std::endl;
    std::cout << "Foundation Donation Income: $" << donationIncome << std::endl;

    for (int i = 0; i < boardMembers.size(); ++i) {
        std::cout  << "Foundation Member: " << boardMembers[i] << std::endl;
    }
}
