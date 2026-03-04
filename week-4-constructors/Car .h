//Name: Farida Shehu
//Course: CSCI 272-01
//Lesson Number: Lesson 4
//Code Topic: Constructor Example
//Date: 03/02/2025

#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        string brand{"Volkswagen"};
        string model = "Polo";
        int year{2012};
        
    public:
        Car() { //default constructor
            string brand = "BMW";
            string model = "M4";
            int year = 2015;
            
        }
        
        Car(string b, string m, int y){ //parameterized constructor
            brand = b;
            model = m;
            year = y;
        }
        
        Car(const Car& other){ //copy constructor
            brand = other.brand;
            model = other.model;
            year = other.year;
        }
        
        void startEngine() { //method to start the car's engine
            cout << "Starting the engine of car {brand: " << brand
            << " | model: " << model << "}" << endl;
        }
        
        void accelerate() { //method to accelerate the car
            cout << "Accelerating the car {brand: " << brand << 
            " | model: " << model << "}" << endl;
        }
        
};








