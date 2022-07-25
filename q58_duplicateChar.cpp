#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    map<char, int> mp;
    string s;
    cin >> s;
    for (char c : s)
        mp[c]++;
    for (auto c : mp)
        if (c.second > 1)
            cout << c.first << " " << c.second << endl;

    // for (int i = 0; i < s.size(); i++)  //alternative code because it is little big
    // {
    //     mp[s[i]]++;
    // }
    // for (auto it : mp)
    // {
    //     if (it.second > 1)
    //     {
    //         cout << it.first << " " << it.second << endl;
    //     }
    // }
    // return 0;
}