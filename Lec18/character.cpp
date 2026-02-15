#include<iostream>
using namespace std;

int main(){

   // char a[6]="Hello";

   char a[1000];
  // cin>>a;  // cin does not need white space character
  //cin.getline(a,1000);  // this will help you to read the sting with whitespace character....
  // you should remeber this
  // string is a set of character terminated by Null character

  cin.getline(a,5);

  // cin.getline(array_name, no_of_character, delimiter_character);
  //by default delimiter character is: '\n' (Enter)
   cout<<a<<endl;

    return 0;
}