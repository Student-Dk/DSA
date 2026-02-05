#include<iostream>
using namespace std;

void print(int x){// variable ka name kuch bhi le sakte hai
    cout<<x<<endl;
}

int main(){
    int a=9;

    print(a);// 3,4 kuch bhi as a argument pass kar sakte hai but if function only take integer parameter the pass only any integer value
   // cout<<x; ye error dega kykui iss x ka scope iss function me nhi hai 



    return 0;
}