#include<iostream>
#include<cstring>

using namespace std;
void rotateString(char a[],int k){
    int lena =strlen(a);
    k%=lena;
    //1. Shift all characters k times ahead

    int j=lena-1;
    while(j>=0){
        a[j+k]=a[j];
        j--;
    }

    //2. bring last k character to front

    int i=0;j=lena;
    while(i<k){
        a[i]=a[j];
        i++;
        j++;
    }

    // 3. Add null

    a[lena]='\0';
}
void reverseString(char a[],int i, int j){
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}

void rotateString1(char a[], int k){
    
int lena=strlen(a);
k%=lena;
// Reverse Entire String
reverseString(a,0,lena-1);

//2. Reverse first K buckets
reverseString(a,0,k-1);

//3. Reverse Last remaining.. buckets
reverseString(a,k,lena-1);
}

int main(){

    char a[100]="coding";
    int k=1;


    rotateString1(a,k);
 
    cout<<a<<endl;

    return 0;
}