/*c++ function 
Author: Gloria Mwenga
Ren:BSCIT-01-0155/2024
Date:16 march 2024
version 1
*/


#include<iostream>
using namespace std;

struct player{
   string name;
   int score;
   int level;
};

void displayplayer(const player &p){
     cout<<"player name: "<<p.name<<endl;
     cout<<"player score: "<<p.score<<endl; 
     cout<<"player level: "<<p.level<<endl;
}

int main(){
       player player1={"joy", 6, 12};
       player player2={"joan", 5, 16};

       displayplayer(player1);
       displayplayer(player2);
  return 0;
}
