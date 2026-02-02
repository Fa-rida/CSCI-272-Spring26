#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    vector<int> num= {1,8,5,6,7,9,4,6};
    
    cout << "the size of the vector is " << num.size() << endl;
    //.size tells you the number of elements in the array
    for (int i=0; i<8; i++){
        cout << num.at(i) << endl; //.at is used to access the value of num at that index
    }
    num.push_back(40);
    num.push_back(15);
    //num.push_back() is used to add elements to your vector
    cout << "the size of the vector is " << num.size() << endl;
    for (int i=0; i<num.size(); i++){
        cout << num.at(i) << endl;
    }
    cout << "fall is over, no more limited edition" << endl;
    num.pop_back();
    //num.pop_back() is used to delete elements from your vector
     cout << "the size of the vector is " << num.size() << endl;
     for (int i=0; i<num.size(); i++){
        cout << num.at(i) << endl;
     }
    
    return 0;
}