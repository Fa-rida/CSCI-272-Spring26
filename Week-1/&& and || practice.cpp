#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string username;
    string pswd;
    cout << "Enter your username ";
    cin >> username;
    cout << "enter your password ";
    cin >> pswd;
    if (username == "Farida" && pswd == "admin123") {
        cout << "you have successfully logged in" << endl;
    }
    else {
        cout << "invalid login attempt" << endl;
    }
    
    return 0;
}