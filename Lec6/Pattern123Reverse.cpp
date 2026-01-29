#include <iostream>
using namespace std;

int main()
{

    // N=4;

    // r1     _ _ _ 1
    // r2     _ _ 2 3 2
    // r3     _ 3 4 5 4 3
    // r4     4 5 6 7 6 5 4
    //
    // har row me kitne space print ho rahe hai
    // 1. spaces -> (N-r) times
    //
    //    i=1;
    //    while(i<=N-r){
    //   cout<<" ";
    //   i=i+1;
    //          }

    // 2. Incresing no -> r times the value of number starts from r
    //
    //  no=r
    //  i=1
    //  while(i<=r){
    //   cout<<no
    //   no=no+1;
    //   i=i+1;
    //    }
    // 3. decring no -> (r-1) times , i=2*r-2
    //   no=2*r-2
    // i=1
    //   while(i<r){
    //  cout<<no
    //     no=no-1;
    //    i=i+1;
    //    }
    //
    //
    // r1     _ _ _ 1
    // r2     _ _ 2 3 2
    // r3     _ 3 4 5 4 3
    // r4     4 5 6 7 6 5 4

    int n;
    cin >> n;
    int r = 1;
    int i, no;
    while (r <= n)
    {

        i = 1;
        while (i <= n - r)
        {
            cout << " ";
            i = i + 1;
        }

        no = r;
        i = 1;
        while (i <= r)
        {
            cout << no;
            i = i + 1;
            no = no + 1;
        }

        no = r * 2 - 2;
        i = 1;
        while (i <= r - 1)
        {
            cout << no;
            i = i + 1;
            no = no - 1;
        }

        cout << endl;
        r = r + 1;
    }
    return 0;
}