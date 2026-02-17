#include<iostream>
#include<cstring>

using namespace std;

void copy(char largest[], char a[]){
    int lena =strlen(a);

    for(int i=0;i<=lena;i++){
        largest[i]=a[i];
    }
}

int main(){


char a[1000];
char largest[1000];
int llen=0;
int n;
cin>>n;
cin.ignore();

for(int i=0;i<n;i++){
    cin.getline(a,1000);
    int len=strlen(a);
    if(len>llen){
        // update the largest and llen because we found the largest string
       llen=len;
    //   copy(largest,a);
     strcpy(largest,a);
    }

}

cout<<largest<<endl;



    // char a[100];
    // char b[100];
    // char c[100];
    // cin.getline(a,100);
    // int lena=strlen(a);
    // cin.getline(b,100);
    // int lenb=strlen(b);
    // cin.getline(c,100);
    // int lenc=strlen(c);

    // if(lena> lenb and lena>lenc){
    //        cout<<a;
    // }else if(lenb>lenc){
    //     cout<<b;
    // }else{
    //     cout<<c;
    // }



    return 0;
}