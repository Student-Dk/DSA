#include<iostream>
using namespace std;

int main(){
    // int a[1000];
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     a[i]=i+10;
    // }
    // take input of user

    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }

    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;


    // int a[]={1,2,3,4,5};//[1,2,3,4,5,0,0,0,0,0] other buckets will get value o
    // cout<<sizeof(a)<<endl;
    //int a[10]; jab tak maine isse initilaize nhi kiya tab tak 
    //inn 10 buckets me garbage value thi

    // but jab mai array ki ek bhi value ko initialize karta hau
    ///then remainig buckets me o hota hai automatic
    int a[10]={1};
    for(int i=0;i<10;i++){
        cout<<a[i]<<" "<<endl;
    }

    return 0;
}