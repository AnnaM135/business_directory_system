#include <iostream>
#include <string>
#include "./headers/Ngo.h"
#include "./headers/CJSC.h"
#include "./headers/Retail.h"
#include "./headers/Education.h"

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

    // LLC l;
    // l.name = "My LLC";
    // l.director = "Karen Hakobyan";
    // l.monthlyBudget = 8000;
    // l.owners = {"Karen", "Narek"};
    // l.isVATRegistered = true;
    // l.printInfo();

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

    Retail myShop;
    myShop.name = "Ani's Mini Market";
    myShop.director = "Ani Grigoryan";
    myShop.monthlyBudget = 6000;
    myShop.owners = {"Ani"};
    myShop.isVATRegistered = false;
    myShop.numberOfProducts = 1200;
    myShop.mainCategory = "Groceries";
    myShop.printInfo();
    std::cout << "Estimated Annual Budget: " << myShop.calculateAnnualBudget() << " ֏" << std::endl;
    myShop.addProducts(300);
    std::cout << "New total products: " << myShop.numberOfProducts << std::endl;
    std::cout << "Is Large Retailer ? " << (myShop.isLargeRetailer() ? "Yes" : "No") << std::endl;

    std::cout << " " << std::endl;
    Education edu;
    edu.name = "Children Education Foundation";
    edu.numberOfStudents = 300;
    edu.donationIncome = 900000;
    edu.educationLevel = "Primary School";
    edu.printInfo();
    std::cout << "Estimated Annual Budget: " << edu.calculateAnnualBudget() << " ֏" << std::endl;
    edu.enrollStudents(50); 
    std::cout << "Total Students: " << edu.numberOfStudents << std::endl;
    std::cout << "Average Donation per Student: " << edu.averageDonationPerStudent() << " ֏" << std::endl;


    return 0;
}
