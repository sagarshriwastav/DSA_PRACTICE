#include <bits/stdc++.h>8
using namespace std;
/*Time Complexity=O(n)
Space Complexity=O(1)
inputs=>n=8, a=[3 4 5 2 1 7 1 7]
output=> 1 & 7 */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n; // 8
    int a[n]; // 3 4 5 3 1 7 1
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        // imp...
        cout << a[a[i] % n] << endl;
        a[a[i] % n] /*[3 4 5 3 1 7 1] */ = a[a[i] % n] + n /*[3 16 5 16 8 8 7 8*/;
        // 3%8 gives output as 3
        // 4%8 gives output as 4
        // 5%8 gives output as 5
    }
    for (int i = 0; i < n; i++)
    {
        // imp...
        if (a[i] / n > 1)
            cout << i << endl;
    }
    return 0;
}
/*Ques.-Find the Duplicate Number
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.*/
// Another approach is by storing element frequency in hash map.
