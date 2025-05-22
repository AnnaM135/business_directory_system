#include <string>
#include <map>
#include "Organization.h"

class CJSC : public Organization {
    public:
        std::map<std::string, int> shareholders; // name -> count
        double totalCapital;

        void printInfo() override;
};