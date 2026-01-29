#include<iostream>
using namespace std;

int main(){
    //Print all prime No b/w 2 to N

    int n,number,i,flag;
    cin>>n;
    number =2;
    while (number<=n)
    {
       //check whether number is prime or not
       flag=1;// Initally the flag is 1
       i=2;
       while (i<=number-1)
       {
        if(number%i==0){
            flag=2;// On number being not prime i'll change the flag to 2
        }
        i=i+1;
       }
       //loop ke bahar check if the number is prime or not prime?

       if(flag==1){
        cout<< number<<" ";//print the number only if it is prime
       }
       number=number+1;

       
    }
    


    return 0;
}