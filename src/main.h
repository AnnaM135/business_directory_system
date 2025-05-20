#include <string>
#include "headers/Organization.h"


class Retail : public LLC {
public:
    int numberOfProducts;
    std::string mainCategory;

    void printInfo() override;
    double calculateAnnualBudget() override;
};

class Education : public Foundation {
public:
    int numberOfStudents;
    std::string educationLevel;

    void printInfo() override;
    double calculateAnnualBudget() override;
};

class Service : public LLC {
    // No additional methods or members yet
};

