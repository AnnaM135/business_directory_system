#include <iostream>
#include <string>
#include "main.h" 

class Organization {
    public: 
        std::string name;
        std::string type;
        std::string registrationNumber;
        std::string address;
        std::string phone;
        std::string email;
        std::string website;
        std::string director;
        double monthlyBudget;

        virtual void printInfo()
        {
            std::cout << "Organization name: " << name << std::endl;
            std::cout << "Organization type: " << type << std::endl;
        }

        virtual double calculateAnnualBudget() {
            return monthlyBudget * 12;
        }
};

class Foundation : public Organization {
    public:
        void printInfo()
        {
            std::cout << "Foundation Name: " << name << std::endl;
        }
};
    
class NGO : public Organization {
    public:
        void printInfo()
        {
            std::cout << "NGO Name: " << name << std::endl;
        }
};

class LLC : public Organization {
    public:
        void printInfo()
        {
            std::cout << "LLC Name: " << name << std::endl;
        }
};

class JSC : public Organization {
    public:
        void printInfo()
        {
            std::cout << "JSC Name: " << name << std::endl;
        }
};
    


class Retail : public LLC {
    public:
        int numberOfProducts;
        std::string mainCategory;
    
        void printInfo() override 
        {
            std::cout << "Retail Name: " << name << std::endl;
            std::cout << "Main Category: " << mainCategory << std::endl;
        }

        double calculateAnnualBudget() override
        {
            return numberOfProducts * 15000; // ~ 15000amd of 1 product 
        }
};

class Education : public Foundation {
    public:
        int numberOfStudents;
        std::string educationLevel;
    
        void printInfo() override
        {
            std::cout << "Education Name: " << name << std::endl;
            std::cout << "Level: " << educationLevel << std::endl;
        }

        double calculateAnnualBudget() override
        {
            return numberOfStudents * 200000;  // 1 year finance of 1 student
        }
};

class Service : public LLC {

};


int main() {

    std::cout << " " << std::endl;
    Retail myShop;
    myShop.name = "Ani's Mini Market";
    myShop.type = "Retail";
    myShop.numberOfProducts = 1200;
    myShop.mainCategory = "Groceries";
    myShop.printInfo();
    std::cout << "Estimated Annual Budget: " << myShop.calculateAnnualBudget() << " ֏" << std::endl;

    std::cout << " " << std::endl;
    Education edu;
    edu.name = "Children Education Foundation";
    edu.type = "Education";
    edu.numberOfStudents = 300;
    edu.educationLevel = "Primary School";
    edu.printInfo();
    std::cout << "Estimated Annual Budget: " << edu.calculateAnnualBudget() << " ֏" << std::endl;

    std::cout << " " << std::endl;
    Service cleaning;
    cleaning.name = "Quick Clean LLC";
    cleaning.type = "Cleaning Service";
    cleaning.printInfo();

    return 0;
}
