#include <vector>
#include <string>
#include "Organization.h"

class LLC : public Organization {
    public:
        std::vector<std::string> owners;
        bool isVATRegistered;

        void printInfo() override;
        double calculateAnnualBudget() override;

};
    