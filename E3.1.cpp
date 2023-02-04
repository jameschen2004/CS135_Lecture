/*
Author: James
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Write a program that reads an integer and prints whether it is negative, zero, or
positive.

*/

#include <iostream>

int main(){

    int num;
    std::cin >> num;

    if (num > 0 || num == 0){
        if (num > 0){
        std::cout << "positive" << std::endl;}
        else{
            std::cout << "zero" << std::endl;}
        }
    else{
        std::cout << "negative" << std::endl;
    }

    return 0;
}