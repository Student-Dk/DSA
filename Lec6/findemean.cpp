#include <iostream>
#include<climits>//INT_MIN = -2^31, INT_MAX = 2^31-1
using namespace std;

int main(){

    //Q1 Given a list of N integers, find mean, maximum and minimum value. you would be given first N and then N
    // integers of the list


    // int n,no;
    // cin>>n;
    // int min;
    // cin>>min;
    // int max;
    // max=min;
    // int sum=min,mean=0;
    // int i=1;
    // while(i<n){
    //     cin>>no;
    //     sum=sum+no;
    //     if(max<no){
    //         max=no;
    //     }
    //     if(min>no){
    //         min=no;
    //     }
    //     i=i+1;
    // }

    // mean=sum/n;
    // cout<<"Maximu number: "<<max<<endl;
    // cout<<"Minimum number: "<<min<<endl;
    // cout<<"mean: "<<mean;


    // in class

    int n,ans =INT_MIN,i,no;
    cin>>n;
    i=1;
    while (i<=n)
    {
        cin>>no;
        if(no>ans){
            ans=no; // we check if input no is greater than ans simply update ans
        }
       i=i+1;
    }
    
cout<<"Largest: "<<ans<<endl;


    return 0;
}