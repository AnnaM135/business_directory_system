#ifndef ORGANIZATION_H
#define ORGANIZATION_H

#include <string>

class Organization {
    public:
        std::string name;
        std::string registrationNumber;
        std::string address;
        std::string phone;
        std::string email;
        std::string website;
        std::string director;
        double monthlyBudget;
    
        virtual void printInfo();
        virtual double calculateAnnualBudget();
};

#endif 