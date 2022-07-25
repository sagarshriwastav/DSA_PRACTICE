/*
q8. Given an array Arr[] of N integers.
Find the contiguous sub-array(containing at least one number)
which has the maximum sum and return its sum.
*/
//  We have to solve using kadane's algorithm.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int ma = INT_MIN;
    int max_till_here = 0;

    // int cs = a[0];
    // int ms = a[0];
    // for (int i = 0; i < n; i++)
    // {
    //     cs = max(cs + a[i], a[i]);
    //     ms = max(ms, cs);
    // }
    // cout << ms;

    for (int i = 1; i <= n; i++)
    {
        max_till_here = max_till_here + a[i];
        if (max_till_here > ma)
        {
            ma = max_till_here;
        }
        if (max_till_here < 0)
        {
            max_till_here = 0;
        }
    }
    cout << ma;
}