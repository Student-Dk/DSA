#include<iostream>
using namespace std;

int main(){

    //quest ek number lo user se and uske even and odd digit ka sum nikaloo

    // int n;
    // cin>>n;
    // int position=1;
    // int eds=0,ods=0;

    // while(n>0){

    //     if(position%2==0){

    //         eds=eds+n%10;
           
    //     }else{
    //         ods=ods+n%10;
          
    //     }

    //     n=n/10;
    //      position++;
    // }

    // cout<<eds<<"  "<<ods;


    // Bostan Number:- Sum of Factors digit sum is equal to sum of digits of a number

    // 378 ka factors digits = 2*3*3*3*7 and iska sum 18
    // 3+7+8=18
    // means ye bostan number hai 

    // sum of digit kaise nikalte hai
    // mod karke sum kar doo

    int n;
    cin>>n;
    int digitSum=0;
    int copy_n=n;
    while(n>0){
        digitSum=digitSum + n%10;
        n=n/10;
    }
    cout<<digitSum<<endl;

// how to find factors

  n=copy_n;
  int x=2;
  int fs=0;
  while(n>=x){

while(n%x==0){
    cout<<x<<" ";
    fs=fs+x;
    n=n/x;
}



    x++;
  }
cout<<"endl";
  if(fs==digitSum){
    cout<<"Btson number";
  }else{
    cout<<"Not a botson number";
  }


    return 0;
}