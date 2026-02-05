#include<iostream>
using namespace std;

void update(int &a){  // int &a=x // yaha pe a bucket x ka hi dusra name hai
    a=a+1;                 

    cout<<"Inside update: "<<a<<endl;
}

int main(){
    int x=1;  
    cout<<x<<endl;// x=1;
    update(x);  
    cout<<x<<endl; //x=1;
    return 0;
}