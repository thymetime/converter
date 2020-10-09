//
//  main.cpp
//  test1
//
//  Created by Olyad Kitila on 10/6/20.
//  Copyright © 2020 Olyad Kitila. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>


int main() {
    
    std::string country;
    int choice, temp;
    float dist, weight, tempF, distMile, weightLb;
    
    std::cout << "Enter a country name: ";
    getline(std::cin, country);
    std::cout << std::endl << std::endl;
    
    std::cout << "Converter Toolkit" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << "1. Temperature Converter" << std::endl
    << "2. Distance Converter" << std::endl
    << "3. Weight Converter" << std::endl
    << "4. Quit" << std::endl << std::endl;
    
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;
    
    while (choice < 1 || choice > 4) {
        std::cout << "Please select a valid option (1-4): ";
        std::cin >> choice;
    }
    
    //std::cout << choice << country << std::endl;
    
    switch (choice) {
        case 1:
            std::cout << "Please enter temperature in Celsius (such as 42): ";
            std::cin >> temp;
            
            tempF = (float)temp * (9/5) + 32;
            std::cout << "It is " << tempF << " in Fahrenheit." << std::endl << std::endl;
            break;
        case 2:
            std::cout << "Please enter distance in Kilometers (such as 78): ";
            std::cin >> dist;
            
            if (dist < 0) {
                std::cout << "!!! Program does not convert negative distance !!!" << std::endl << std::endl;
            } else {
                distMile = dist / (1 / 0.6);
                std::cout << "It is " << std::fixed << std::setprecision(2) << distMile << " in Miles." << std::endl << std::endl;
            }
            break;
        case 3:
            std::cout << "Please enter weight in Kilograms (such as 43): ";
            std::cin >> weight;
            
            if (weight < 0) {
                std::cout << "!!! Program does not convert negative weight !!!" << std::endl << std::endl;
            } else {
                weightLb = weight * 2.2;
                std::cout << "It is " << std::fixed << std::setprecision(1) << weightLb << " in Pounds." << std::endl << std::endl;
            }
            break;
        case 4:
            std::cout << "Wow so you really ran the program just to exit it? So wasteful." << std::endl << std::endl;
            break;
        default:
            std::cout << "Looks like you didn't choose a menu option. Choose from 1-4 next time!" << std::endl << std::endl;
            
        ;
            
    }

    std::cout << country << " sounds fun!" << std::endl << std::endl;

    std::cout << "Thank you for testing my program =) " << std::endl;
    std::cout << "PROGRAMMER: Olyad Kitila" << std::endl;
    std::cout << "CMSC140 Common Project 2" << std::endl;
    std::cout << "Due Date: 10/11/2020" << std::endl;

    
}
