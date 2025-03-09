/*c++ function
  Author:Gloria Mwenga
  Ren no: BSCIT-01-0155/2024
Date:8/3/2025
version 1*/
  

#include <iostream>
#include <string>
using namespace std;

// Base Class: Person
class Person {
protected:
    string name;
public:
    void setName(string n) { 
      name = n; }
    string getName() { 
      return name; }
};

// Derived Class: LibraryMember (inherits from Person)
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;
public:
    LibraryMember(string n, int id, int books) {
        name = n;
        memberID = id;
        booksBorrowed = books;
    }
    int getMemberID() { 
      return memberID; }
    int getBooksBorrowed() { 
      return booksBorrowed; }
};

// Derived Class: PremiumMember (inherits from LibraryMember)
class PremiumMember : public LibraryMember {
private:
    double membershipFee;
public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books), membershipFee(fee) {}

    double getMembershipFee() {
      return membershipFee; }
};

// Main function to test the classes
int main() {
    PremiumMember member("Gloria", 250, 3, 19.99);

    cout << "Member Name: " << member.getName() << endl;
    cout << "Member ID: " << member.getMemberID() << endl;
    cout << "Books Borrowed: " << member.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << member.getMembershipFee() << endl;

    return 0;
}

