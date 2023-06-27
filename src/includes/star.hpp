#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <sstream>

/*

Why I chose these parameters to begin with:

Mass : the initial mass is fundamental and influences a star's evolution

Metallicity : is the abundance of elements heavier than helium. Different metallicities
result in different nuclear fusion rates and different energy generation processes

Temperature : It has an influence on the structure, transport mechanisms and rates of nuclear
reactions. 

Rotation Rate : the rotation rate of a star affects the angular momentum, stellar winds, mixing 
and transport processes within the star, and the rotations create a magnetic field through the
dynamo process

*/

// Star class
class Star {
private:
    double mass, metallicity, temp, rotationRate;

public:
    Star();
    Star(double mass, double metallicity, double temp, double rotationRate);

    // getters and setters
    double getMass() const;
    void setMass(double mass);

    double getMetallicity() const;
    void setMetallicity(double metallicity);

    double getTemp() const;
    void setTemp(double temp);

    double getRotaRate() const;
    void setRotaRate(double rotationRate);

    // return Star Info
    void starInfo();
};

Star::Star(double mass, double metallicity, double temp, double rotationRate) {
    this->mass = mass;
    this->metallicity = metallicity;
    this->temp = temp;
    this->rotationRate = rotationRate;
}

double Star::getMass() const {
    return mass;
}

double Star::getMetallicity() const {
    return metallicity;
}

double Star::getTemp() const {
    return temp;
}

double Star::getRotaRate() const {
    return rotationRate;
}

void Star::setMass(double mass) {
    this->mass = mass;
}

void Star::setMetallicity(double metallicity) {
    this->metallicity = metallicity;
}

void Star::setTemp(double temp) {
    this->temp = temp;
}

void Star::setRotaRate(double rotationRate) {
    this->rotationRate = rotationRate;
}

void Star::starInfo() {

    std::cout << "-----Star-----" << std::endl;
    std::cout << "Initial mass: " << getMass() <<std::endl;
    std::cout << "Metallicity: " << getMetallicity() <<std::endl;
    std::cout << "Temperature: " << getTemp() <<std::endl;
    std::cout << "Rotation Rate: " << getRotaRate() <<std::endl;
}