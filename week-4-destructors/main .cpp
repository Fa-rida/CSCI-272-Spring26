//Name: Farida Shehu
//Course: CSCI 272-01
//Lesson Number: Lesson 4
//Code Topic: Destructor Example
//Date: 03/02/2025

#include "Car.h"

int main(){
    
    Car car1;
    Car car2("Tesla", "X", 2022);
    Car car3(car2);
    
    
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    
    return 0;
}


/*
Reflection:
1. What I understood:
I understood what out of scope means and how destructors are called automatically.

2. Difficulties:
I did not understand what out of scope means when calling the destructor

3. Research: 
I read about destructors online on geeksforgeeks website

4. AI usage:
I used AI to understand out of scope better i.e. what out of scope means

*/


