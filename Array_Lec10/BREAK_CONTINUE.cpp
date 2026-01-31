#include<iostream>
using namespace std;

int  main(){

    // int i=1;
    // while(i<=10){
    //     cout<<i<<" ";

    //     if(i==4){
        
    //         break;// break:-  To exit a loop, loop se bahar
    //     }
    //     i=i+1;
    
    // }
    // cout<<endl;

    int n;
    cin>>n;
    int i=1;
    while(i<=n){

        cout<<i<<"";

        if(i==3){
            i++;// make sure to update befor continue
            
            continue; // continue without updation is infinite loop
        }




        i=i+1;
    }




    return 0;
}