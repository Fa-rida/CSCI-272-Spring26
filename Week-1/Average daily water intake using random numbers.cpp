#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    
    float average;
    int total;
    int days = 1;
    int low_rand = 1000;
    int high_rand = 3000;
    srand(time(0));
    
    while(days <= 7) {
        total= total + rand() % (high_rand - low_rand) + low_rand;
        days = days + 1;
    }
    cout << "The total water intake is " << total << endl;
    
    average = total/7;
    cout << "the average daily intake is " << average << endl;
    
    if (average > 2500) {
        cout << "Well hydrated! Great job!" << endl;
    }
    else if (average >= 1500 && average <= 2499) {
        cout << "You're doing okay, drink more!" << endl;
    }
    else if (average < 1500) {
        cout << "Stay hydrated! Increase your intake!" << endl;
    }
    
    return 0;
}