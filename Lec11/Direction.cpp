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


    // cout<<x<<y;

    if(x>=0 and y>=0){// 1st quadrant
        // x times 'E' and y times 'N'
        for(int i=0;i<x;i++){
           cout<<'E';
        }

        for(int i=0; i<y;i++){
            cout<<'N';

        }

    }
    else if(x<=0 and y>=0){// 2 nd quadrant
        // y  times 'N' and |x| times 'W'
         x*=-1; // make x positive

        for(int i=0;i<y;i++){
            cout<<'N';
        }
        for(int i=0;i<x;i++){
            cout<<'W';
        }

    }
    else if(x<=0 and y<=0){// 3rd quadrant
         // y times 'S' and x times 'W'

           x*=-1; // make x positive
           y*=-1; // make y positive

        for(int i=0;i<y;i++){
            cout<<'S';
        }
        for(int i=0;i<x;i++){
            cout<<'W';
        }

    }else{// 4 th quadrant
        // x times 'E' and y times 'S'
          y*=-1;

            for(int i=0;i<x;i++){
            cout<<'E';
        }

        for(int i=0;i<y;i++){
            cout<<'S';
        }
      

    }





    return 0;
}