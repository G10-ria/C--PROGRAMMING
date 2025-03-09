/*c++ function
Author:Gloria Mwenga
Ren no:BSCIT-01-0155/2024
Date:8th march 2025
version 1
*/

#include <iostream>
#include <string>
using namespace std;

// Base Class: AccountHolder
class AccountHolder {
protected:
    string name;
public:
    void setName(string n) { 
      name = n; }
    string getName() { 
      return name; }
};

// Derived Class: BankAccount (inherits from AccountHolder)
class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;
public:
    BankAccount(string n, int accNum, double bal) {
        name = n;
        accountNumber = accNum;
        balance = bal;
    }
    int getAccountNumber() { 
      return accountNumber; }
    double getBalance() { 
      return balance; }
};

// Derived Class: SavingsAccount (inherits from BankAccount)
class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(string n, int accNum, double bal, double rate)
        : BankAccount(n, accNum, bal), interestRate(rate) {}

    double getInterestRate() {
      return interestRate; }
};

// Main function to test the classes
int main() {
    SavingsAccount myAccount("Gloria", 12345, 4000.75, 1.6);

    cout << "Account Holder: " << myAccount.getName() << endl;
    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Balance: $" << myAccount.getBalance() << endl;
    cout << "Interest Rate: " << myAccount.getInterestRate() << "%" << endl;

    return 0;
}

