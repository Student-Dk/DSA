#include <iostream>
using namespace std;

int main(){

    //Q1 Given a list of N integers, find mean, maximum and minimum value. you would be given first N and then N
    // integers of the list


    int n,no;
    cin>>n;
    int min;
    cin>>min;
    int max;
    max=min;
    int sum=min,mean=0;
    int i=1;
    while(i<n){
        cin>>no;
        sum=sum+no;
        if(max<no){
            max=no;
        }
        if(min>no){
            min=no;
        }
        i=i+1;
    }

    mean=sum/n;
    cout<<"Maximu number: "<<max<<endl;
    cout<<"Minimum number: "<<min<<endl;
    cout<<"mean: "<<mean;


    return 0;
}