#include "Foundation.h"

class Education : public Foundation {
public:
    int numberOfStudents;
    std::string educationLevel;

    void printInfo() override;
    double calculateAnnualBudget() override;

    void enrollStudents(int count);   
    double averageDonationPerStudent();
};