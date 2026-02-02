#include <iostream>
using namespace std;

void calc_payroll(float& payroll_total, int& overtime_counter) {
    int num_employees;
    int i;
    int num_hours;
    float hourly_rate;
    float salary;
    
    cout << "How many number of employees are there? ";
    cin >> num_employees;
    for (i=1; i<=num_employees; i++){ // for loop to iterate through each employee
        cout << "enter the number of hours worked for employee " << i << " ";
        cin >> num_hours;
        cout << "what is your hourly rate? ";
        cin >> hourly_rate;
        salary = hourly_rate * num_hours;// calculates the total salary for each employee
        payroll_total = payroll_total + salary; // calculates the value of the total salary for all employees.
        if (num_hours > 40){ // if condition to check if the employee has worked overtime
            overtime_counter = overtime_counter + 1;
        }
    }
    cout << "the total salary paid is " << payroll_total << endl;
    cout << overtime_counter << " number of employees eligible for overtime." << endl;
}

int main() {
    float total;
    int overtime=0;
    
    calc_payroll(total, overtime); // function call
    
    return 0;
}