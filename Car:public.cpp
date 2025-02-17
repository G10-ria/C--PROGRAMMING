/*
C++ function 
Author:Gloria Mwenga 
Ren no:BSCIT-01-0155/2024
Date:29 January 2025
version 1
*/

#include<iostream>
#include<string>
using namespace std;

class car{
private:
  string brand;
  string model;
  float price;
  int mileage;

public:
//constructor to initialize data members
  car(string b,string m, float p, int mi){
     brand=b;
     model=m;
     price=p;
     mileage=mi;
}

//function to display car details
void display(){
cout<<"Brand:"<<brand<<end1;
cout<<"Model:"<<model<<end1;
cout<<"Price:$"<<price<<end1;
cout<<"Mileage:"<<mileage<<"miles"<<end1;}
};

int main(){
//creating a car object with the given details
car mycar("Toyota", "Corolla", 20000, 5000);

//Display the car's details
mycar.display();
//simulte driving the car for 150 miles
mycar.drive(150);
//simulate driving the car for 300 miles
mycar.drive(300);

return 0;
}
