#include "../includes/star.hpp"
#include "../includes/userInputs.hpp"

#include <iostream>



int main (void) {
    
    std::cout<<"Star Evo Sim"<<std::endl;

    // input for star params
    double mass, metallicity, temp, rotationRate;

    getUserInputs(mass, "Initial Mass");
    getUserInputs(metallicity, "Metallicity");
    getUserInputs(temp, "Temp");
    getUserInputs(rotationRate, "Rotation Rate");

    // input star
    Star userStar(mass, metallicity, temp, rotationRate);

    userStar.starInfo();


}