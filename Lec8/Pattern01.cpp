#include<iostream>
using namespace std;

int main(){

    /*
       1
       0 1 
       1 0 1
       0 1 0 1
       1 0 1 0 1 
    
    */


    int n;
    cin>>n;
    int no;
    for(int row=1;row<=n;row++){
          if(row%2==0){
            no=0;
          }else{
            no=1;
          }
          for(int col=1;col<=row;col++){


            cout<<no<<" ";
            no=1-no;
          }


          cout<<endl;
    }


    return 0;
}