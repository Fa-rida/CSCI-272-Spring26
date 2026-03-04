//Name: Farida Shehu
//Course: CSCI 272-01
//Lesson Number: Lesson 4
//code Topic: Secure User Authentication
//Date: 03/03/2026

#include "User.h"

int main() {
    
    
    //create an instance of the user class named user1 with the provided
    //username and password.
    User user1("username123", "password123");
    
    
    //attempt to login using a different username and password.
    bool success = user1.login("username1234", "password123");
    
    //check if the login attempt was successful
    if (success){
        cout << "Login successful" << endl;
        
    }
    else{
        cout << "Login failed. Please check your credentials and try again" << endl;
    }
    
    return 0;
}


/*

1. What I understood:
I understood how to integrate pass by reference into a member function in a class.
At first, I mistook it for a copy constructor.

2. Difficulties:
I encountered difficulties while trying to understand why there was no if/else statements
just a return statement.

3. Research: 
I checked if there were shorter ways to write if/else statements on w3schools and geeksforgeeks.

4. AI usage:
I used AI to understand my boolean condition problem.

5. What I learned:
I learned that return (condition) is a shorter way of writing the full boolean if/else statements.

*/

