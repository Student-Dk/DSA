#include<iostream>
using namespace std;
void printArray(int arr[],int n){ // array always paas by call by refernce
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}

int main(){

    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    printArray(arr,n); 
    return 0;
}