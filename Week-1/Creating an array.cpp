//create a float array "prices" with 8 items' prices. take the value from the user
//and store it in the array. print the prices.
#include <iostream>
using namespace std;
int main() {
    
    float price[8]; // 8 here is the size of the array.
    for (int i =0; i<7; i++){
        cout << "what is the price of the item ";
        cin >> price[i];
    }
    for (int i =0; i<7; i++){
        cout << price[i] << endl;
    }
   
    
    return 0;
}