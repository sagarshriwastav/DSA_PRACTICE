#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s1, s2;
    cin >> s1 >> s2;
    // cin >> s2;
    if (s1.size() != s2.size())
        cout << "No";
    else
    {
        string temp = s1 + s1;
        if (temp.find(s2) != string ::npos)
            cout << "yes";
        else
            cout << "No";
    }
}