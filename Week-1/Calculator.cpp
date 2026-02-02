#include <iostream>
using namespace std;
int main(){
    
    float num1;   
    float num2;
    float result;
    char user_choice; 
    
    cout << "Enter the value of num1 "; //
    cin >> num1;
    cout << "Enter the value of num2 ";
    cin >> num2;
    cout << "Choose one of the following options:" << endl;
    cout << "A for addition" << endl;
    cout << "S for subtraction" << endl;
    cout << "M for multiplication"<< endl;
    cout << "D for division" << endl;
    cout << "Enter a choice: ";
    cin >> user_choice; // asks the user to select the arithmetic operation they want to perform.
    
    if (user_choice == 'A') {
        result = num1 + num2;
        cout << "The addition of " << num1 << " and " << num2 << " is " << result << endl;
    }
    else if (user_choice == 'S') {
        result = num1 - num2;
        cout << "The subtraction of " << num1 << " and " << num2 << " is " << result << endl;
    }
    else if (user_choice == 'M') {
        result = num1 * num2;
        cout << "The multiplication of " << num1 << " and " << num2 << " is " << result << endl;
    }
    else if (user_choice == 'D'
    ) {
        result = num1 / num2;
        cout << "The division of " << num1 << " and " << num2 << " is " << result << endl;
    }
    else { // if user inputs a operation that has not been declared, return invalid input.
        cout << "Invalid input" << endl; 
    }
    return 0;
}