/*
Author: James
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E3.5 - Write a program that reads three numbers and prints 
“increasing” if they are in increasing order, “decreasing” if they are 
in decreasing order, and “neither” otherwise. Here, “increasing” means 
“strictly increasing”, with each value larger than its predecessor. 
The sequence 3 4 4 would not be considered increasing.

*/

#include <iostream>

int main(){

    int num_1;
    int num_2;
    int num_3;

    std::cin >> num_1;
    std::cin >> num_2;
    std::cin >> num_3;

    if (num_1 > num_2 && num_2 > num_3){

        std::cout << "decreasing \n";

    }

    else if (num_1 < num_2 && num_2 < num_3){

        std::cout << "increasing \n";

    }

    else{

        std::cout << "neither \n";

    }

    return 0;
}