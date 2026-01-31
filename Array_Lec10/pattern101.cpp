#include<iostream>
using namespace std;

int main(){


/*
ques


* *** *** *
** ** ** **
*** * * ***

*/


int n;
cin>>n;
int r=1,i=1;
for(r=1;r<=n;r++){

    //1 print r times *

for(i=1;i<=r;i++){
    cout<<"*";
}

// 2 print ' '

cout<<" ";

// 3 print n-r+1 times star *
for(i=1;i<=n-r+1;i++){
    cout<<"*";
}

//4 Print ' '
cout<<" ";



// 5 Print n-r+1 times star *;
for(i=1;i<=n-r+1;i++){
    cout<<"*";
}


// Print ' '
cout<<" ";

// Print r times *
for(i=1;i<=r;i++){
    cout<<"*";
}

cout<<endl;

}




    return 0;
}

// for(i=1;i<=n-r;i++){
//     cout<<" ";
// }

// for(i=1;i<=r-1;i++){
//     cout<<" ";
// }
// for(i=1;i<=r-1;i++){
//     cout<<" ";
// }

// for(i=1;i<=n-r;i++){
//     cout<<" ";
// }