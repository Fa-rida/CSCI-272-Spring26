#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std; 

string ensureYorN (string question){ // a function to ensure the user enters only y or n and nothing else.
    string response;
    while (true) {
        cout << question << " ,y(yes) or n(no)? ";
        cin >> response;
        if (response == "y" || response == "n"){
            return response;
        }
        else {
            cout<< "Please enter either y or n only " << endl;
        }
    }
}

int convert(string x) { // a function to convert user answer from y/n to 0/1.
    int answer;
    if(x == "y") {
        answer = 1;
    }
    else if(x == "n") {
        answer = 0;
    }
return answer;
}

int main(){

  srand(time(0));
  int i;
  int n;
  int num;
  int y;
  int p;
  int j;
  string reply;
  int total_score=0;
  int difference;
  int computerGuessIndex;
  int userCharacterIndex;
  int userScore = 0;
  string user_response;
  string user_answer; // 1 for yes and 0 for no
  int userAnswer; //this stores the user's answer after converting it to 0 or 1
  vector<string>characters = {"Thor", "Captain America", "Iron Man", "Doctor Strange", "Black Panther", "Hulk", "Spider-Man", "Black Widow", "Hawkeye", "Mantis", "Batman", "Flash", "Wolverine", "Wonderwoman", "Superman", "Aquaman"};

  // vector of the character traits indicating if they have these abilities or not. 1 represents yes and 0 represents no.
  vector<int>Can_fly = {1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0}; 
  vector<int>Magic_powerAblities = {1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1};
  vector<int>Male = {1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1};
  vector<int>weapons = {1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 1};
  vector<int>armor = {1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1};
  vector<int>humor = {0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0};
  vector<int>serious = {0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0};
  vector<bool>possible = {true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true}; // stores the possible values left after eliminating characters based on the question.
  vector<int>remaining; // stores the values remaining after looping through "possible"

do { // this puts the etire game in a loop that only runs again if the condition at the end is true.
    total_score = 0;
    for (p = 0; p<3; p++){ // makes the game go on for 3 rounds
        remaining.clear(); // clear the values in "remaining" after each round
        for(j=0; j<possible.size(); j++){ // resets all the values in possible to true after each round
            possible.at(j) = true;
        }
        
        cout<<"=========================================="<<endl;
        cout<<" Welcome to Guess Who: Superhero Edition! "<<endl;
        cout<<"=========================================="<<endl;
        
        cout<<"Pick from the list of characters and I'll try to guess it!"<<endl; 
        cout<<"If I guess the character correctly, I'll take 10 points from your initial points. But if I get it wrong, You get 5 additional points!"<<endl;
        cout<<"First to 30 points will win!"<<endl;
        
        cout<<"============================================================================================"<<endl;
        cout<<"Please choose from the list of chracters below and keep it in mind for the rest of the game!"<<endl;
        cout<<"0.Iron Man"<<endl;
        cout<<"1.Captain America"<<endl;
        cout<<"2.Spider-Man"<<endl;
        cout<<"3.Thor"<<endl;
        cout<<"4.Hulk"<<endl;
        cout<<"5.Black Widow"<<endl;
        cout<<"6.Doctor Strange"<<endl;
        cout<<"7.Hawkeye"<<endl;
        cout<<"8.Black Panther" << endl;
        cout<<"9.Mantis" << endl;
        cout<<"10.Batman" << endl;
        cout<< "11.Flash" << endl;
        cout<< "12.Wolverine" << endl;
        cout<< "13.Wonder Woman" << endl;
        cout<< "14.Superman" << endl;
        cout<< "15.Aquaman" << endl;
        cout<<"============================================================================================="<<endl;
        
        cout << "please input the index number of your character by typing the number next to your character in the list. ";
        cin >> userCharacterIndex; // to compare with the computer's answer's index to determine who has won or lost and how to score.
        
        
        //scoring 
        cout << "To know your starting score, please enter your lucky number ";
        cin >> num;
        
        y= rand() % (num-1+1) + 1; // high is num which is the user's input and low is 1
        
        if (num-y== 0 || num-y== -1 || num-y== 1){
            userScore = 50;
        }
        else if (num-y== 2 || num-y== -2){
            userScore = 30;
        }
        else {
            userScore = 10;
        }
        cout << "Congratulations! Your starting score is " << userScore<< endl;
        
        
        
        user_response = ensureYorN("Can your hero fly?"); // calling the function that ensures the user input is y or n.
        userAnswer = convert(user_response); // calling the function and saving it in the variable userAnswer
        
        for (i=0; i<characters.size(); i++) { // looping through the characters to eliminate the ones can or can't fly, based on users input
            if (Can_fly.at(i) != userAnswer) {
                possible.at(i) = false;
            }
        }
        
        
        user_response = ensureYorN("Is your hero known for their humor?"); //Spiderman, iron man
        userAnswer = convert(user_response);
        
        for (i=0; i<characters.size(); i++) {
            if (humor.at(i) != userAnswer) {
                possible.at(i) = false;
            }
        }
        
        //cout<<"Is your hero one of the original six avengers?"<<endl;//Hulk, thor, captain america, hawkeye, widow
        
        user_response = ensureYorN("Is your hero more serious than funny?"); //captain america, black widow
        userAnswer = convert(user_response);
        
        for (i=0; i<characters.size(); i++) {
            if (serious.at(i) != userAnswer) {
                possible.at(i) = false;
            }
        }
        
        
        user_response = ensureYorN("Does your hero use magic or spells?"); //dr strange, thor, mantis
        userAnswer = convert(user_response);
        
        for (i=0; i<characters.size(); i++) {
            if (Magic_powerAblities.at(i) != userAnswer) {
                possible.at(i) = false;
            }
        }
        
        
        user_response = ensureYorN("Does your hero wear armor?"); // black panther, thor, captain america, iron man
        userAnswer = convert(user_response);
        
        for (i=0; i<characters.size(); i++) {
            if (armor.at(i) != userAnswer) {
                possible.at(i) = false;
            }
        }
        
        
        user_response = ensureYorN("Is your hero a male?");//widow, Mantis
        userAnswer = convert(user_response);
        
        for (i=0; i<characters.size(); i++) {
            if (Male.at(i) != userAnswer) {
                possible.at(i) = false;
            }
        }
        
        
        user_response = ensureYorN("Is your hero skilled with weapons?");//hawkeye, thor, captain america
        userAnswer = convert(user_response);
        
        for (i=0; i<characters.size(); i++) {
            if (weapons.at(i) != userAnswer) {
                possible.at(i) = false;
            }
        }
        
        
        for (i=0; i<possible.size(); i++) { //looping through the vector "possible" to collect the indices of the characters that are still true.
            if (possible.at(i) == true) {
                remaining.push_back(i);
            }
        }
        
        if (remaining.size() == 1) {
            cout << "Your character is " << characters.at(remaining.at(0)) << endl;
            computerGuessIndex = remaining.at(0);
            if (computerGuessIndex == userCharacterIndex) { // if the index of the computer's guessed character is the same as the index of the user's character,
                userScore = userScore - 10;                 // reduce user's score.
            }
            cout << "User score: " << userScore << endl;
        }
        else if (remaining.size() > 1) {
            n = 0 + (rand() % (remaining.size() - 0));
            cout << "I think your character is " << characters.at(remaining.at(n)) << endl;
            computerGuessIndex = remaining.at(n);
            if (computerGuessIndex == userCharacterIndex) {
                userScore = userScore - 10;
            }
            cout << "User score: " << userScore << endl;
        }
        else {
            cout << "You win. I couldn't guess your character." << endl;
            userScore = userScore + 5;
            cout << "User score: " << userScore << endl;
        }
        total_score = total_score + userScore;
        
    }
    
    cout << "The total user score is " << total_score << " points." << endl;
    if (total_score>30){
        cout << "You win!! Congratulations." << endl;
    }
    else {
        cout << "Awww you lost. Better luck next time." << endl;
    }
    
    cout << "Do you want to play another round?(y/n) "<< endl;
    cin>> reply;
    
}while (reply == "y"); //condition that determines if the game runs again.


return 0;
  

}