#include<iostream>
using namespace std;

int main(){

 /*
    
 1
 1 1
 2 0 2
 3 0 0 3
 4 0 0 0 4
 */

 int n;
 cin>>n;
 for(int r=1;r<=n;r++){

    
        if(r==1){
            cout<<1;
        }else{

for(int i=1;i<=r;i++){
if(i==1 || i==r){
cout<<r-1;
}else{
    cout<<0;
}


}

        }
    


    cout<<endl;
 }



    return 0;
}