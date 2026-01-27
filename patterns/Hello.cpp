#include <iostream>
using namespace std;

int main() {

//DSA lec2 Q1 

//Q1 find sum of n numbers

// int n;
// cout<<"enter number ";
// cin>>n;
// int sum=0,i=1;
// while(i<=n){
//     sum=sum+i;
//     i=i+1;
// }
// cout<< "sum of "<<n<<" numbers 1 to "<<n<<" is "<<sum;

//Q2 find average of N number

// int n;
// cout<<"Enter number ";
// cin>>n;
// int i=1,sum=0,avg=1;
// while(i<=n){
//     sum=sum+i;
//     i++;
// }

// avg=sum/n;
// cout<<"average of 1 to "<<n<<" numbers is "<<avg;

//Q3 sum of n even numbers


int n;

cout<<"enter number ";
cin>>n;
//Approach 1;
// int i=1,sum=0;
// while(i<=n){
//     if(i%2==0){
//         sum=sum+i;
//     }
//     i++;
// }


//Approah 2 ; updation karunga i=i+2;
// int i=2,sum=0;
// while(i<=n){
//     sum=sum+i;
//     i=i+2;
// }

//Approach 3 direct using formula


cout<<"sum of 1 to "<<n<<" even numbers: "<< n*(n+2)/4;


    return 0;
}
