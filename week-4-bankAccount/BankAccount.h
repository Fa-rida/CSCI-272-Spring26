//Name: Farida Shehu
//Course: CSCI 272-01
//Lesson Number: Lesson 4
//Code Topic: Bank Account Example
//Date: 03/02/2025

class BankAccount{
    private:
        double balance = 0.0; //private member variable to store the account balance
        
    public:
        //public methods for controlled access
        
        //method to deposit funds into the account
        void deposit(double amount) {
            balance += amount; //increase the balance by the deposited amount
            
        }
        //new getter method: returns the current balance
        double getBalance() const{
            return balance;
        }
        //method to withdraw funds from the account
        void withdraw(double amount) {
            if (amount <= balance) {
                balance -= amount; //decrease the balance if sufficient funds are available
            }
        }
};