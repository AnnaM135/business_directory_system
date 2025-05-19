#include <string>

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

    virtual void printInfo();
    virtual double calculateAnnualBudget();
};

class Foundation : public Organization {
public:
    void printInfo() override;
};

class NGO : public Organization {
public:
    void printInfo() override;
};

class LLC : public Organization {
public:
    void printInfo() override;
};

class JSC : public Organization {
public:
    void printInfo() override;
};

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

