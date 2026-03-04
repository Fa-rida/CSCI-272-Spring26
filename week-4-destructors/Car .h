//Name: Farida Shehu
//Course: CSCI 272-01
//Lesson Number: Lesson 4
//Code Topic: Destructor Example
//Date: 03/02/2025

#include <iostream>
using namespace std;

class Car{
    private:
        string brand{"Volkswagen"};
        string model = "Polo";
        int year{2012};
        
    public:
        //destructor: called when the object is destroyed
        ~Car(){
            cout << "Object is destroyed" << endl;
        }
        
        //default constructor
        Car(){
            
        }
        
        //parameterized constructor
        Car (string b, string m, int y){
            brand = b;
            model = m;
            year = y;
        }
        
        //copy constructor
        Car(const Car& other){
            brand = other.brand;
            model = other.model;
            year = other.year + 1; //increment the year by 1
            
        }
        
        //member function to start car engine
        void startEngine() {
            cout << "Start engine {brand: " << brand << " | model: " << model
            << "}" << endl;
        }
        
        //member function to acelerate the car
        void accelerate(){
            cout << "Accelerate engine {brand: " << brand << " | model: " << model
            << "}" << endl;
        }
    
        
};