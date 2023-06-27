#ifndef USERINPUTS_HPP
#define USERINPUTS_HPP

#include <iostream>
#include <string>

// get user inputs for star params
void getUserInputs(double& param, const std::string& paramName) {
    std::cout << "Enter " << paramName << ": ";
    std::cin >> param;
}

#endif