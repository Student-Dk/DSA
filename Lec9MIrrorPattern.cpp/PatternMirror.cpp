#include<iostream>
using namespace std;

int main(){
/*                // nd=(n+1)/2
             *    // spaces->(nd-r)times space
            ***   //2 star->(2*r-1)times star print ho raha hai
           *****
            ***
             *
             
------------------------------------------------
             *    //spaces->(nd-r)times space
            ***   //2 star->(2*r-1)times star print ho raha 
           *****
*/

int n;
cin>>n;
int nd= (n+1)/2;
for(int r=1;r<=nd;r++){
    for(int i=1;i<=nd-r;i++){  
        cout<<" ";
    }

    for(int i=1;i<=2*r-1;i++){
        cout<<"*";
    }
    cout<<endl;
}

// write a oppostie loop

//Pattern mirror

for(int r=nd-1;r>=1;r--){
    for(int i=1;i<=nd-r;i++){  
        cout<<" ";
    }

    for(int i=1;i<=2*r-1;i++){
        cout<<"*";
    }
    cout<<endl;
}

    return 0;
}