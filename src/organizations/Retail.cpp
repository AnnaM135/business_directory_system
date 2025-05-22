#include <iostream>
#include "../headers/Retail.h"

void Retail::printInfo() 
{
    std::cout << "Retail Name: " << name << std::endl;
    std::cout << "Main Category: " << mainCategory << std::endl;
}

double Retail::calculateAnnualBudget()
{
    return numberOfProducts * 15000; // ~ 15000amd of 1 product 
}

void Retail::addProducts(int count) 
{
    numberOfProducts += count;
}

bool Retail::isLargeRetailer() const
{
    return numberOfProducts > 1000;

}