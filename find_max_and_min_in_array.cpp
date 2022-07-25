//max and min element of an array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter size of Array" << endl;
    int n;
    cin >> n;
    cout << "Enter element of Array" << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mn = INT_MAX, mx = INT_MIN;
    // int mn = 10000, mx =0 ;
    for (int i = 0; i < n; i++)
    {
        if (mn > a[i])
        {
            mn = a[i];
        }
        if (mx < a[i])
        {
            mx = a[i];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (mx < a[i])
    //     {
    //         mx = a[i];
    //     }
    // }
    cout << "min of the array is: " << mn << endl;
    cout << "max of the array is: " << mx << endl;

    return 0;
}