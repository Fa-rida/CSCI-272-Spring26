//Name: Farida Shehu
//Course: CSCI 272-01
//Lesson Number: Lesson 4
//code Topic: Secure User Authentication
//Date: 03/03/2026

#include <iostream>
#include <string>
using namespace std;

class User{
    private:
        string username;
        string password;
        
    public:
        //constructor for creating a user object with an initial username and password
        User(const string& uname, const string& pwd) {
            username = uname;
            password = pwd;
        }
        
        //define a member function for attempting a login with provided credentials
        //it takes inputUser and inputpwd as paraeters and returns a boolean indicating success
        bool login(const string& inputUser, const string& inputPwd){
            return (inputUser==username) && (inputPwd==password);
        }
        
        //define a member function for updating the user's password
        //it takes newPwd as a parameter and updates the stored password
        void updatePassword(const string& newPwd) {
            //update the password with the provided new password
            password = newPwd;
        }
};

