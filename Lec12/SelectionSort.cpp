#include<iostream>
using namespace std;

int main(){

    int a[]={2,4,5,6,1,4,2,5,-3,-4,-4,-1};
    int n=sizeof(a)/sizeof(int);

    for(int i=0;i<n-1;i++){
        int mi=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mi]){
                mi=j;
            }
        }

        swap(a[mi],a[i]);
    }
      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // for(int i=0;i<n-1;i++){
    //     int min=a[i+1];
    //     int mi=i+1;

    //     for(int j=i+1;j<n;j++){
    //         if(min<a[j]){
    //             min=a[j];
    //             mi=j;
    //         }

    //     }

    //     if(a[i]<a[mi]){
    //     swap(a[i],a[mi]);
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;



    return 0;
}