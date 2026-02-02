#include <iostream>
using namespace std;
int main() {
    
    int min_exercise;
    int day = 1;
    int minutes;
    
    cout << "Enter exercise minutes for day " << day;
    cin >> min_exercise;
    
    while (min_exercise != 0) {
        minutes = minutes + min_exercise;
        day = day + 1;
        cout << "Enter exercise minutes for day " << day;
        cin >> min_exercise;
    }
    cout << "calculation complete!" << endl;
    cout<< "You recorded a total of " << minutes << "minutes of exercise." << endl;
    
    return 0;
}