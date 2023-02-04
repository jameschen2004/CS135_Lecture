/*
Author: James
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E2.10 - Write a program that asks the user to input
• The number of gallons of gas in the tank
• The fuel efficiency in miles per gallon
• The price of gas per gallon
Then print the cost per 100 miles and how far the car can go with the gas in the tank.

*/

#include <iostream>

int main(){

    float gas_in_tank;
    float fuel_efficiency;
    float price_per_gal;
    float cost_per_100_miles;
    float possible_miles_travelled;

    std::cin >> gas_in_tank;
    std::cin >> fuel_efficiency;
    std::cin >> price_per_gal;

    cost_per_100_miles = (100 / fuel_efficiency) * price_per_gal;
    std::cout << cost_per_100_miles << std::endl;
    
    possible_miles_travelled = gas_in_tank * fuel_efficiency;
    std::cout << possible_miles_travelled << std::endl;

    return 0;
}