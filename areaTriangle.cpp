// Copyright (c) 2022 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Created on: Jan. 19, 2022
// This program caculates the area of a triangle.

#include <iostream>
#include <iomanip>


// this function calculates the area of a triangle
void CalcArea(float base, float height) {
    // declares area variable
    float area;

    // calculates the area
    area = (base * height) / 2;

    // displays results to user
    std::cout << "The area of the triangle is " << std::fixed;
    std::cout << std::setprecision(2) << area << "cm^2";
}


// this function checks for any invalid inputs
int main() {
    // declares variables
    std::string baseFromUserString, heightFromUserString;
    float baseFromUserFloat, heightFromUserFloat;

    // collects base and height from user
    std::cout << "Enter the base (cm): ";
    std::cin >> baseFromUserString;
    std::cout << "Enter the height (cm): ";
    std::cin >> heightFromUserString;
    std::cout << std::endl;

    // checks if the user has entered the correct number
    try {
        // convert the user's input to a float
        baseFromUserFloat = std::stof(baseFromUserString);
        heightFromUserFloat = std::stof(heightFromUserString);

        // checks if numbers are greater than 0
        if (baseFromUserFloat > 0 && heightFromUserFloat > 0) {
            CalcArea(baseFromUserFloat, heightFromUserFloat);
        } else {
            std::cout << "The base and height must be greater than 0.";
        }
    // determines if the input is valid
    } catch (std::invalid_argument) {
    // tells user did the input is not a number
    std::cout << "Invalid data entered! Only numbers can be accepted!\n";
    }
}
