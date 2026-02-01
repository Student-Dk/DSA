#include <iostream>
using namespace std;

int main()
{

    // Q1 Count number of characters till you read a $
    // CountChar Till$
    /*

    int cnt = 0;
    char ch;
    cin >> ch;
    while (ch != '$')
    {
        cnt++;
        cin >> ch;
    }
    cout<<cnt;

    */

    // Whitespace : [ ' ' , '\n' , '\t']

    int digits = 0, alpha = 0, spaces = 0, special = 0,words=1,lines=0;

    char ch;
    ch = cin.get();// will take input of white space characters as well as but cin ignor whitespace characters

    while (ch != '$')
    {

        if ((ch >= 'a' and ch <= 'z') || (ch >= 'A' and ch <= 'Z'))
        {
            alpha++;
        }
        else if (ch >= '0' and ch <= '9')
        {
            digits++;
        }
        else if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            spaces++;
            words++;
        }
        else if(ch=='.'){
            lines++;
        }
        else
        {
            special++;
        }
        ch = cin.get();
    }

    cout << "Digits" << digits << endl;
    cout << "Alpha" << alpha << endl;
    cout << "spaces" << spaces << endl;
    cout << "special" << special << endl;
    cout << "Words"<<words<<endl;
    cout<<"Lines"<<lines<<endl;

    // Q2  Modify the above to print total number of digits, whitespaces, alphabets
    // and other characters till you read a $

    return 0;
}