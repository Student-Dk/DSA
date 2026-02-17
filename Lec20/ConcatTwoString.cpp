#include<iostream>
#include <cstring>

using namespace std;

void concat(char a[], char b[]){
    int lena=strlen(a);
    int lenb=strlen(b);
    int j=0,i=lena;

    while(j<=lenb){
        a[i]=b[j];
        i++;
        j++;
    }
}

int main(){

    char a[100]="hi";
    char b[100]="world";
    char c[100]="How are you";

    //concat(a,b);
    cout<<strcat(a,b)<<endl;  // strcat inbuilt function 
    // concatination of two strings

    cout<<strcat(a,c)<<endl;


    return 0;
}