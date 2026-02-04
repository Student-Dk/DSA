#include<iostream>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }

    return true; 
}
void printAllPrimes(int n){
    for(int i=2;i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
  

    int n;
    cin>>n;
    printAllPrimes(n);



    return 0; 
}

 // bool ans = checkPrime(12 );

    // if(ans==true){
    //     cout<<"Prime\n";
    // }else{
    //     cout<<"Not Prime\n";
    // }


    // if(checkPrime(7)==true){
    //     cout<<"Prime";
    // }else{
    //     cout<<"Not Prime";
    // }