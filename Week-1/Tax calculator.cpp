#include <iostream>
using namespace std;
int main(){
    
    float user_salary;
    float tax_amount;
    
    cout << "Welcome to Mario's Federal Tax Calculator" << endl;
    cout << "Enter your pay salary in a year ";
    cin >> user_salary;
    if ( user_salary < 11000) {
        tax_amount = user_salary * 0.10;
        cout << "Tax amount you owe to IRS is " << tax_amount << endl;
    }
    else if ( user_salary >= 11000 && user_salary <= 44725) {
        tax_amount = 1100 + 0.12 * (user_salary - 11000);
        cout << "Tax amount you owe to IRS is " << tax_amount << endl;
    }
    else if ( user_salary > 44725 && user_salary <= 95375) {
        tax_amount = 5147 + 0.22 * (user_salary - 44725);
        cout << "Tax amount you owe to IRS is " << tax_amount << endl;
    }
    else if ( user_salary > 95375 && user_salary <= 182100) {
        tax_amount = 16290 + 0.24 * (user_salary - 95375);
        cout << "Tax amount you owe to IRS is " << tax_amount << endl;
    }
    else if ( user_salary > 182100 && user_salary <= 231250) {
        tax_amount = 37104 + 0.32 * (user_salary - 182100);
        cout << "Tax amount you owe to IRS is " << tax_amount << endl;
    }
    else if ( user_salary > 231250) {
        cout << "Contact our tax experts" << endl;
    }
    return 0;
}