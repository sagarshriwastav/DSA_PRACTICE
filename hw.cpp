#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
int main()
{
    // if else statement homework

    // int a = 9;
    // if (a == 9)
    //     cout << "niney" << endl;
    // if (a > 0)
    //     cout << "+" << endl;
    // else
    //     cout << "-" << endl;

    // int b = 2;
    // int c = b + 1;
    // if ((b = 3) == c)
    // {
    //     cout << b << endl;
    //     cout << "hello" << endl;
    // }
    // else
    //     cout << b + 1 << endl;

    // int d = 24;
    // if (d > 20)
    //     cout << "sagar" << endl;
    // else if (d == 24)
    //     cout << "kumar" << endl;
    // else
    //     cout << "shriwastav" << endl;
    // cout << d;

    char ch=cin.get();
    cout<<ch<<endl;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "it is a capital letter" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout
            << "it is a small letter" << endl;
    }
    else 
    {
        cout << "it is a numeric value" << endl;
    }
    return 0;
}