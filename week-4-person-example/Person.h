//Name: Farida Shehu
//Course: CSCI 272-01
//Lesson Number: Lesson 4
//Code Topic: Constructor Example
//Date: 03/02/2025

#include <iostream>
using namespace std;

class Person{
    public:
        string name{"Farida"};
        int age{39};
        char gender{'F'};
        
    public:
        //define a member function named to introduce the Person
        void introduce(){
            cout << "Hello, I'm " << name << ". I'm " << age << " years old." << endl;
            
            //check the gender and provide additional info accordingly
            if (gender == 'M') {
                cout << "I'm a male." << endl;
            }
            else if (gender == 'F') {
                cout << "I am a female." << endl;
            }
            else {
                cout << "Gender unspecified" << endl;
            }
        }
};