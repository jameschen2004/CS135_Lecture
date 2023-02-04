/*
Author: James
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E1.7 - Write a program that prints three items, such as the names of your three best friends
or favorite movies, on three separate lines.

*/

#include <iostream>
#include <string>

int main(){

    std::string person_1;
    std::string person_2;
    std::string person_3;

    std::cin >> person_1;
    std::cin >> person_2;
    std::cin >> person_3;

    std::cout << person_1 << std::endl;
    std::cout << person_2 << std::endl;
    std::cout << person_3 << std::endl;
    return 0;
}