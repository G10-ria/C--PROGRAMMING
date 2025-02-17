/*
C++ function
Author: Gloria Mwenga
Ren no:7505
Date:11 february 2025
Version 1
*/

#include<iostream>
using namespace std;

class BankAccount{
   private:
     string setaccountHolder;
     double balance;

   public:
     void setaccountHolder(string a){
         accountHolder=a;
       }

     string getaccountHolder(){
        return accountHolder;
      }

     void setbalance(double b){
        balance=b;
      }

     double getbalance(){
        return balance;
      }
};

int main(){
     BankAccount ba1;
     ba1.setaccountHolder("lilian");
     cout<<"accountHolder is "<<ba1.getaccountHolder()<<endl;

     ba1.setbalance(2000);
     cout<<"balance is "<<ba1.getbalance()<<endl;

     return 0;
}
