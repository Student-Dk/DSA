#include<iostream>
using namespace std;

void update(int a){
    a=a+1;                 // a and x are two different buckets

    cout<<"Inside update: "<<a<<endl;
}

int main(){
    int x=1;  
    cout<<x<<endl;// x=1;
    update(x);  // x ki value pass kari upar ek new bucket bann gaya a name ki that is call by value
               // a  ki value update karne se x ki value update nhi hota that is call by value
    cout<<x<<endl; //x=1;
    return 0;
}