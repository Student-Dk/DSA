#include<iostream>
using namespace std;


int main(){

    /*
     ques. A person wants to go from origin to a particular location,
     he can move only 4 directions (like East, West, North, South) but his friend gave him a long
     route, help a person to find minimum moves so that he can reach to 
     the Destination

     Input:- NESNWES
     Output:- E

     you need to print the lexicographically (dictionary wise) sorted string.
     Assume the string will have only "E", 'N', 'S', 'W' characters

     Eg:- SSSNEEEW
     op:-  EESS
    
    
    */

    //----code------------

    char ch;
    int x=0,y=0;
    ch=cin.get();

    while(ch!='\n'){
        if(ch=='N') y++;
        else if(ch=='S') y--;
        else if (ch=='E') x++;
        else x--;


        ch=cin.get();
    }

    // E,N,S,W

    if(x>=0){
        for(int i=0;i<x;i++){
            cout<<'E';
        }
    }
    // print either N or S
   char temp;
   if(y>=0) temp='N';
   else temp = 'S';

   y=abs(y);   // y= |y|

   for(int i=0;i<y;i++){
    cout<<temp;
   }

   if(x<=0){
    x=abs(x);
    for(int i=0;i<x;i++){
        cout<<'W';
    }

   }






    // if(y>=0){
    //     for(int i=0;i<y;i++){
    //         cout<<'N';
    //     }

    // }

    // if(y<=0){
    //     y*=-1;
    //     for(int i=0;)
    // }


    return 0;
}