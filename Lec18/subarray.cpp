#include <iostream>
using namespace std;

int ans = INT_MIN;  // or we can also take a[0]
int si,ei;

int main()
{

    int a[] = {1, 2,3,2,-1,3};
    int n = sizeof(a) / sizeof(int);

    if(n==0){//corner case
        cout<<"Empty Subarray hoga, sum: "<<0<<endl;
    }

    // All the subarrays
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            // Before we are iterating over the subarray ek bucket
            // lelo jisme sum find karnege

            int subArraySum = 0;
            for (int k = i; k <= j; k++)
            {
               // cout << a[k] << " ";
                subArraySum += a[k];
            }
            // Subarray par iterate kake sum nikala hai usse print kardo
            //cout << " , Sum: " << subArraySum << endl;

           // ans=max(ans,subArraySum);
           // cout<<endl;

           if(subArraySum>ans){ // Agar sum bada hai subarray ka ans update karo
            ans=subArraySum;
            si=i; // jis subarray ka sum nikala hai vo i,j ki range wale index ka hai us range ko bhi store karlo
            ei=j;
           }
        }

        
    }


    cout<<" Maximum Subarray Sum: "<<ans<<endl;
    cout<<"Index range:"<<si<<","<<ei<<endl;

    for(int i=si;i<=ei;i++){
        cout<<a[i]<<" ";
    }

    return 0;
    
}