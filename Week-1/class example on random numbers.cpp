#include <iostream>
#include <cstdlib> 
using namespace std;

int main(){
    srand(time(0)); 
    
    int rand_num = rand(); 
    int high_rand_num;
    int low_rand_num;
    
    cout<< "please input highest random number ";
    cin>> high_rand_num;
    cout<< "highest random number is " << high_rand_num << endl;
    cout<< "please input lowest random number ";
    cin>> low_rand_num;
    cout<< "lowest random number is " << low_rand_num << endl;
    
    cout<< low_rand_num + (rand() % (high_rand_num - low_rand_num)); 
    // the formula above is for generating random numbers between the high and
    // low numbers while including the low number.
    
     
    return 0;
}