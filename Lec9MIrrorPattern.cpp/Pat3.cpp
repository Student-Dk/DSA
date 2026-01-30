#include<iostream>
using namespace std;

int main(){

    /*
   *
  * *
 *   *
*     *
 *   *
  * *
   *


---------------------------------------

   *
  * *
 *   *
*     *
    
    
    
    */

    int n,nd,r,i;
    cin>>n;
    nd=(n+1)/2;

    for(r=1;r<=nd;r++){
        if(r==1){
            for(i=1;i<=nd-r;i++){
                cout<<" ";
            }
            cout<<"*";
        }else{
            for(i=1;i<=nd-r;i++){
                cout<<" ";
            }

            cout<<"*";

             for(i=1;i<=2*r-3;i++){
                cout<<" ";
            }

            cout<<"*";

        }



        cout<<endl;
    }
 for(r=nd-1;r>=1;r--){
        if(r==1){
            for(i=1;i<=nd-r;i++){
                cout<<" ";
            }
            cout<<"*";
        }else{
            for(i=1;i<=nd-r;i++){
                cout<<" ";
            }

            cout<<"*";

             for(i=1;i<=2*r-3;i++){
                cout<<" ";
            }

            cout<<"*";

        }



        cout<<endl;
    }




    return 0;
}