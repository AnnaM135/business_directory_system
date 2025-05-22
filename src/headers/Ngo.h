#include <vector>
#include <string>
#include "Organization.h"

class NGO : public Organization {
    public:
        std::vector<std::string> projects;
        std::string missionStatement;
        std::vector<std::string> focusAreas;

        void printInfo() override;
};