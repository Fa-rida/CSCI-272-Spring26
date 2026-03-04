//Name: Farida Shehu
//Course: CSCI 272-01
//Lesson Number: Lesson 4
//Code Topic: Constructor Example
//Date: 03/02/2025

#include "Car.h"
int main() {
    
    Car car1; // creating an object using the default constructor
    Car car2("Tesla", "X", 2022); // parameterized constructor
    Car car3(car2); // copy constructor with car 2 as the source

    //create pCar1 using dynamic memory allocation with the default constructor
    Car* pCar1 = new Car;
    
    //create pCar2 using dynamic memory allocation with the parameterized constructor
    Car* pCar2 = new Car("Tesla", "X", 2022);
    
    //create an array of 20 cars using the default constructor
    Car carArray[20];
    
    //Start the engines for each car instance
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    pCar1->startEngine();
    pCar2->startEngine();
    carArray[0].startEngine();
    
    // Deallocate the dynamically allocated memory for pCar1 and pCar2-
    delete pCar1;
    delete pCar2;
    
    return 0;
}


/*
1. What I understood:
I understood how to all a member function when the object is a pointer.

2. Difficulties: 
I got confused with the part where we started using pointers.
I did not understand the reason why we initailized the pointer variable with new carArray

3. Research:
I did not search for anything online.

4. AI usage: 
I used AI to understand the part where we included pointer variables

5. What I learned:
I learned that there are different methods to calling a member function.
The object can either be a pointer, an array or a regular object.
*/



