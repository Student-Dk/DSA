#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Q3 There are two sorted arrays. First one is of size m+n containing
//only m elements. Another one is of size n and contains n elements.
//Write a function to merge these two arrays into the first array of 
//size m+n

// this is the best algorith two MergeSortedArrays
// and it will take 7 steps;
void mergeSortedArrays(int a[],int m, int b[],int n){
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(j>=0 and i>=0){
        if(a[i]>b[j]){
            a[k--]=a[i--];
        }else{
            a[k--]=b[j--];
        }
    }

    while(j>=0){
         a[k]=b[j];
         k--;
         j--;
    }
}

int main(){
 int a[7] ={3,5,7,9};
 int m=4;
 int b[3]={1,2,4};
 int n=3;
 mergeSortedArrays(a,m,b,n);
 printArray(a, m+n);

    return 0;
}