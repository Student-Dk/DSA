#include<iostream>
using namespace std;

int main(){

/*
//HollowDiagram


    * * * * *
    * *   * *
    *       *
 ------------------   -------------------
    * *   * *
    * * * * *
-------------------------
 r=1     * * * * *  // for r=1 we print N Stars
   2     * *   * *
   3     *       *
 total Nd rows 

 for other rows  
      stars  ||   space  ||  stars
      Nd-r+1      2*r-3     Nd-r+1

------------------------------------      ------------------------------


    * *   * *
    * * * * *
*/


int n;
cin>>n;
int Nd=(n+1)/2;
int i;

for(int r=1;r<=Nd;r++){

    if(r==1){
        //print n times stars
        for(i=1;i<=n;i++){
            cout<<"*";
        }
    }else{
           
        //1. strars (Nd-r+1)
        for(i=1;i<=(Nd-r+1);i++){
            cout<<"*";
        }

        //1. spaces (2*r-3)
         for(i=1;i<=(2*r-3);i++){
            cout<<" ";
        }

        //1. strars (Nd-r+1)
         for(i=1;i<=(Nd-r+1);i++){
            cout<<"*";
        }
    }





    cout<<endl;
}

for(int r=Nd-1;r>=1;r--){

    if(r==1){
        //print n times stars
        for(i=1;i<=n;i++){
            cout<<"*";
        }
    }else{
           
        //1. strars (Nd-r+1)
        for(i=1;i<=(Nd-r+1);i++){
            cout<<"*";
        }

        //1. spaces (2*r-3)
         for(i=1;i<=(2*r-3);i++){
            cout<<" ";
        }

        //1. strars (Nd-r+1)
         for(i=1;i<=(Nd-r+1);i++){
            cout<<"*";
        }
    }




    
    cout<<endl;
}



    return 0;
}