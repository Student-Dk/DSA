#include<iostream>
#include<cstring>

using namespace std;

int main(){

    // Give a string rotate it by n character e.g. if the stirng
    // is CodingBlocks and n=3 then the output should be cksCodingBlo

    char a[1000];
    char b[1000];
    int n;
    cin>>n;
    cin.ignore();
    cin.getline(a,1000);



  int i,j;
    for( i=0,j=strlen(a)-n;j<strlen(a);i++,j++){
               b[i]=a[j];
    }

    for(j=0;j<strlen(a)-n;j++,i++){
        b[i]=a[j];
    }

    cout<<b;

    return 0;
}