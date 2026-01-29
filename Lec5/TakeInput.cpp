#include <iostream>
using namespace std;
int main()
{

    // 1 first we create buckets/varialbe in cpp to take input in them
    //  int-> 8bytes min 32bit and one bit for sign bit so we have 31bit
    //  range [-2 power 31  to (2 ki power 31 )-1]
    //  because -2 ki power 31 .... -4,-3,-2,-1,0,1,2,3,4.....  (2 ki power 31)-1 tak
    //  agar mai 0 se 5 number count karunga too 0,1,2,3,4 these are 5numbers but  last number is 5-1=4 because of 0
    // but in negative -5,-4,-3,-2,-1 because we count form -1;
    //  int a;

    // cin>>a;
    // cout<<"enter a number ";
    // cout<<a;

    // Q1 Read P,R,T and calculate SI
    //   float p,r,t,si;
    //  cout<<"give the value of P,R and T";
    //  cin>>p>>r>>t;
    //  cout<<"Si is "<<(p*r*t)/100.0;
    // Q2 Finde largest of 3 numbers
    //     int a,b,c;
    //     cout<<"enter three numberrs ";
    //     cin>>a>>b>>c;
    //     if(a>=b && a>=c){
    //      cout<<"Greatest number is "<<a;
    //     }else if (b>c)
    //     {
    //      cout<<b<<" is the greatest number";
    //      /* code */
    //     }else{
    //      cout<<c<<" is the greatest nummber";
    //     }

    // Q3 check if a number is prime of not

    // int n;
    // cout<<"enter number";
    // cin>>n;
    // int i=2;
    // while(i<n){
    //     if(n%i==0){
    //         cout<<" Not prime";
    //         return 0;
    //     }
    //     i++;
    // }


    // cout<<"Prime";

    // Q4 Write a program to print the following pattern
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // int n;
    // cout<<"enter number ";
    // cin>>n;
    // int r=1;
    // int count=1;
    // while(r<=n){
    //       int c=1;
    //     while (c<=r){
    //         cout<<count<<" ";
    //         c++;
    //         count++;
    //     }
       
    //     cout<<endl;
    //     r++;
    // }

    return 0;
}