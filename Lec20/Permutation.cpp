#include<iostream>
#include<cstring>

using namespace std;

bool isPermutation(char a[], char b[]){
    //1. Update the freq array
    int freq[26]={0};
    for(int i=0;a[i]!='\0';i++){
        int index=a[i]-'a';
        freq[index]++;
    }

    // 2. Decrease freq  with b[];

    for(int i=0;b[i]!='\0';i++){
        int index=b[i]-'a';
        freq[index]--;
    }

    //3. check freq array
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }

    return true;
}






int main(){
char a[]="abcdde";
char b[]="bcaede";

bool ans =isPermutation(a,b);
if(ans) cout<<"Yes";
else cout<<"No";
    return 0;
}