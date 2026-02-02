#include <iostream>
using namespace std;
int main(){
    
    int user_age;
    int needed_age;
    
    cout << "Enter your age ";
    cin >> user_age;
    if(user_age < 18){
        cout<<"You're too young to watch this movie" << endl;
        needed_age= 18 - user_age;
        cout << "you have " << needed_age << " more years before you can watch this movie";
    }
    else{
        cout << "you may proceed to your purchase";
    }
    
    
    
    return 0;
}