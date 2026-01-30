#include<iostream>
using namespace std;

int main(){


    /*
    A B C D E E D C B A
    A B C D D C B A
    A B C C B A
    A B B A
    A A
    */

    int n;
    cin>>n;
    for(int r=1;r<=n;r++){
         char ch ='A';
        for(int c=n+1-r;c>0;c--){
          cout<<ch;
          ch=ch+1;
        }
           ch=ch-1;
        for(int c=n+1-r;c>0;c--){
          cout<<ch;
          ch=ch-1;
        }
        cout<<endl;
    }





    return 0;
}