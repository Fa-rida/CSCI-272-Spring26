#include <iostream>
using namespace std;
int main() {
    
    float withdrawal_amount;
    float available_balance = 20000;
    int user_choice;
    
    while (true) {
        cout << "please select an option from the menu" << endl;
        cout << "1 for withdrawal" << endl;
        cout << "2 for balance check" << endl;
        cout << "3 for exit" << endl;
        cin >> user_choice;
    
    
    if (user_choice == 1) {
        cout << "please input the withdrawal amount ";
        cin >> withdrawal_amount;
        if (withdrawal_amount <= available_balance) {
            available_balance = available_balance - withdrawal_amount;
            cout << "take your cash " << endl;
        }
        else {
            cout << "insufficient balance " << endl;
        }
    }
    else if (user_choice == 2) {
        cout << "your available balance is " << available_balance<< endl;
    }
    else if (user_choice == 3) {
        cout << "thank you for using this atm." << endl;
        break;
    }
    else {
        cout << "invalid operation" << endl;
    }
    
    }
    
    return 0;
}