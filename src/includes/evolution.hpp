#ifndef EVOLUTION_HPP
#define EVOLUTION_HPP

#include "star.hpp"

// evolution class
class Evolution {
public:
    static void evolveStar(Star& star);
};

void Evolution::evolveStar(Star& star){
    // retrieve current star properties
    double mass = star.getMass();
    double metallicity = star.getMetallicity();
    double temp = star.getTemp();
    double rotationRate = star.getRotaRate();

}

#endif