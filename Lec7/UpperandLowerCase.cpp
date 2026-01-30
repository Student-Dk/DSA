#include<iostream>
using namespace std;

int main(){
    //Ques
    //Write a program which takes a character input and check that 
    //whether a number is an Upper Case or a Lower Case.
    //A to Z - Upper Case, a to z- lower case
    /*
    A- 65     a- 97  ASCI value
    Z- 90     z-122
    
    char ch='A';
    int x=ch;
    cout<<x; 65 } charcter gets converted to integer on its own
   
    
    
    
    */

    // char ch='A';

    // int x=ch;
    // cout<<x;

    char ch;
    cout<<sizeof(1.10)<<endl;
    cin>>ch;
    if(ch>='A' and ch<='Z'){
        cout<<"Uppercase";
    }else if(ch>='a' && ch<='z'){
        cout<<"lowercase";
    }else{
        cout<<"Invalid";
    }
    //int x=ch ;// Get the ascii value of the character bucket

    // if(x>=65 and x<=90){
    //     cout<<"Upercase"<<endl;
    // }else if(x>=97 and x<=122){
    //     cout<<"Lowercase"<<endl;
    // }else{
    //     cout<<"Not an alphabet"<<endl;
    // }
    return 0;
}