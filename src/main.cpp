#include <iostream>
#include <string>
#include "./headers/Foundation.h"
#include "./headers/Ngo.h"
#include "./headers/LLC.h"
#include "./headers/JSC.h"

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

    Organization myOrg;
    myOrg.name = "My Test Org";
    myOrg.type = "Non-profit";

    myOrg.printInfo();

    Foundation f;
    f.name = "My Foundation";
    f.printInfo();

    NGO n;
    n.name = "My NGO";
    n.printInfo();

    LLC l;
    l.name = "My LLC";
    l.printInfo();

    JSC j;
    j.name = "My JSC";
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
