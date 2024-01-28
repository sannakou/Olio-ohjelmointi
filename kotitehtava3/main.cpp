#include <iostream>
#include <string>

class Chef {
private:
    std::string name;

public:
    Chef(const std::string& chefName) : name(chefName) {
        std::cout << name << " constructor " << std::endl;
    }

    ~Chef() {
        std::cout << name << " destructor " << std::endl;
    }

    void makeSalad() {
        std::cout << name << " makes salad" << std::endl;
    }

    void makeSoup() {
        std::cout << name << " makes soup" << std::endl;
    }

    std::string getName() const {
        return name;
    }
};

class ItalianChef : public Chef {
private:
    double flourAmount;
    double waterAmount;

public:
    ItalianChef(const std::string& chefName, double secretFlour, double secretWater)
        : Chef(chefName), flourAmount(secretFlour), waterAmount(secretWater) {
        std::cout << chefName << " constructor " << std::endl;
    }

    void makePasta() {
        std::cout << "ItalianChef " << getName() << " makes pasta with secret recipe (flour: "
                  << flourAmount << "g, water: " << waterAmount << "ml)" << std::endl;
    }

    ~ItalianChef() {
        std::cout << getName() << " destructor " << std::endl;
    }
};

int main() {
    Chef chef1("Chef Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    ItalianChef italianChef1("Chef Anthony Bourdain", 300.0, 150.0);
    italianChef1.makeSalad();
    italianChef1.makeSoup();
    italianChef1.makePasta();

    return 0;
}
