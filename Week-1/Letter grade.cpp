#include <iostream>
using namespace std;
int main(){
    
    float score;
    cout << "Enter the student's score ";
    cin >> score;
    if ((score >= 93.0) && (score <= 100)) {
        cout << "A" << endl;
    }
    else if ((score >= 90) && (score <= 92.9)) {
        cout << "A-" << endl;
    }
    else if ((score >= 87.1) && (score <= 89.9)) {
        cout << "B+" << endl;
    }
    else if ((score >= 83.0) && (score <= 87.0)) {
        cout << "B" << endl;
    }
    else if ((score >= 80.0) && (score <= 82.9)) {
        cout << "B-" << endl;
    }
    else if ((score >= 77.1) && (score <= 79.9)) {
        cout << "C+" << endl;
    }
    else if ((score >= 73.0) && (score <= 77.0)) {
        cout << "C" << endl;
    }
    else if ((score >= 70.0) && (score <= 72.9)) {
        cout << "C-" << endl;
    }
    else if ((score >= 67.1) && (score <= 69.9)) {
        cout << "D+" << endl;
    }
    else if ((score >= 63.0) && (score <= 67.0)) {
        cout << "D" << endl;
    }
    else if ((score >= 60.0) && (score <= 62.9)) {
        cout << "D-" << endl;
    }
    else if (score < 60.0) {
        cout << "F" << endl;
    }
    
    return 0;
}