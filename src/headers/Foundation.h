#include <string>
#include <vector>
#include "Organization.h"

class Foundation : public Organization {
    public:
        std::vector<std::string> boardMembers;
        double donationIncome;

        void printInfo() override;
};
