
#include<iostream>
using namespace std;

// q1 Write a function which takes a number X and an 
// array and prints all pairs which sum to X;
void printPairs(int a[],int n, int x){
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
    if(a[i]+a[j]==x){
        cout<<a[i]<<" "<<a[j];
    }
}
cout<<endl;
}


}

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    int x=5;
   // printPairs(a,n,x);

    return 0;
}

//q2 Write a function which takes two sorted arrays
// and their lengths as arguments and returns combined 
//median of them without using third array.

