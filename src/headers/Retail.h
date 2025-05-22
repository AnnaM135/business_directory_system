#include "LLC.h"

class Retail : public LLC {
public:
    int numberOfProducts;
    std::string mainCategory;

    void printInfo() override;
    double calculateAnnualBudget() override;

    void addProducts(int count);               
    bool isLargeRetailer() const;          
};