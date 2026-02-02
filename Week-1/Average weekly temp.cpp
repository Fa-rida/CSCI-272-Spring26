#include <iostream>
using namespace std;
int main() {
    
    int i;
    float temperature[7]; // array to store the user input temperatures
    float user_input;
    float total;
    float average;
    
    // not declaring average is the error.
    for (i=1; i<=7; i++) { // for loop to iterate through each temperature
        cout << "what is the temperature for day " << i << " ?" << endl;
        cin >> user_input;
        temperature[i] = user_input; // stores user input to the array temperature with index i
        total = total + user_input; // calculates the total temperature
    }
    cout << "The total is " << total << endl;
    average = total/7; // calculates the average temperature
    cout << "The average temperature of the week is " << average << endl;
    return 0;
}