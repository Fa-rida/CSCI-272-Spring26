//Name: Farida Shehu
//Course: CSCI 272-01
//Lesson Number: Lesson 4
//code Topic: Encapsulate car example
//Date: 03/03/2026

#include <iostream>
using namespace std;

class Car{
    private:
        // data members
        string brand{"Volkswagen"};
        string model{"Polo"};
        int year {2012};
        
    public:
        //member function to start the car's engine
        void startEngine() {
            //code to start the car's engine
            cout << "Start engine" << endl;
        }
        
        //member function to accelerate the car
        void accelerate() {
            //code to accelerate the car.
            cout << "Accelerate engine" << endl;
        }
};