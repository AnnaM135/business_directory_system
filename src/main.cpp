#include <iostream>
#include <string>
#include "./headers/Foundation.h"
#include "./headers/Ngo.h"
#include "./headers/LLC.h"
#include "./headers/CJSC.h"

// class Retail : public LLC {
//     public:
//         int numberOfProducts;
//         std::string mainCategory;
    
//         void printInfo() override 
//         {
//             std::cout << "Retail Name: " << name << std::endl;
//             std::cout << "Main Category: " << mainCategory << std::endl;
//         }

//         double calculateAnnualBudget() override
//         {
//             return numberOfProducts * 15000; // ~ 15000amd of 1 product 
//         }
// };

// class Education : public Foundation {
//     public:
//         int numberOfStudents;
//         std::string educationLevel;
    
//         void printInfo() override
//         {
//             std::cout << "Education Name: " << name << std::endl;
//             std::cout << "Level: " << educationLevel << std::endl;
//         }

//         double calculateAnnualBudget() override
//         {
//             return numberOfStudents * 200000;  // 1 year finance of 1 student
//         }
// };

// class Service : public LLC {

// };


int main() {

    Foundation f;
    f.name = "My Foundation";
    f.director = "John Smith";
    f.monthlyBudget = 5000;
    f.donationIncome = 20000;
    f.boardMembers = {"Alice", "Bob", "Charlie"};
    f.printInfo();

    NGO n;
    n.name = "My NGO";
    n.director = "Emma Brown";
    n.monthlyBudget = 3000;
    n.missionStatement = "Help education in rural areas.";
    n.projects = {"Project A", "Project B"};
    n.focusAreas = {"Environment", "Youth Education", "Human Rights"};
    n.printInfo();

    LLC l;
    l.name = "My LLC";
    l.director = "Karen Hakobyan";
    l.monthlyBudget = 8000;
    l.owners = {"Karen", "Narek"};
    l.isVATRegistered = true;
    l.printInfo();

    CJSC j;
    j.name = "My JSC";
    j.director = "David Grigoryan";
    j.monthlyBudget = 10000;
    j.totalCapital = 500000;
    j.shareholders = {
        {"David", 40},
        {"Anna", 30},
        {"Levon", 30}
    };
    j.printInfo();

    // std::cout << " " << std::endl;
    // Retail myShop;
    // myShop.name = "Ani's Mini Market";
    // myShop.type = "Retail";
    // myShop.numberOfProducts = 1200;
    // myShop.mainCategory = "Groceries";
    // myShop.printInfo();
    // std::cout << "Estimated Annual Budget: " << myShop.calculateAnnualBudget() << " ֏" << std::endl;

    // std::cout << " " << std::endl;
    // Education edu;
    // edu.name = "Children Education Foundation";
    // edu.type = "Education";
    // edu.numberOfStudents = 300;
    // edu.educationLevel = "Primary School";
    // edu.printInfo();
    // std::cout << "Estimated Annual Budget: " << edu.calculateAnnualBudget() << " ֏" << std::endl;

    // std::cout << " " << std::endl;
    // Service cleaning;
    // cleaning.name = "Quick Clean LLC";
    // cleaning.type = "Cleaning Service";
    // cleaning.printInfo();

    return 0;
}
