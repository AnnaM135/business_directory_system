#include <iostream>
#include "../headers/Education.h"

void Education::printInfo()
{
    std::cout << "Education Name: " << name << std::endl;
    std::cout << "Level: " << educationLevel << std::endl;
}

double Education::calculateAnnualBudget()
{
    return numberOfStudents * 200000;  // 1 year finance of 1 student
}

void Education::enrollStudents(int count)
{
    numberOfStudents += count;
}

double Education::averageDonationPerStudent()
{
    if (numberOfStudents == 0) return 0.0;
    return donationIncome / numberOfStudents;
}