#include<iostream>
using namespace std;

//Q1 Write a function which takes an array and its length as argument and returns
// sum of its elemets
int sumofArray(int arr[],int n){

int sum =0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
return sum;


}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Q2 Write a function which takes an array as argument and sorts them using selection sort.

void SelectionSort(int arr[],int n){
   
    for(int i=0;i<n-1;i++){
        int mi=i;
        for(int j=i+1;j<=n-i-1;j++){
            if(arr[mi]>arr[j]){
                mi=j;
            }
        }
        swap(arr[mi],arr[i]);
    }
    
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                     swap(arr[j],arr[j+1]);
            }
        }
    }
}



int main(){

int arr[]={5,4,3,2,1};
int n=sizeof(arr)/sizeof(int);
// SelectionSort(arr,n);
printArray(arr,n);
bubbleSort(arr,n);
printArray(arr,n);


//cout<<sumofArray(arr,n);



    return 0;
}

