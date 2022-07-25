#include <bits/stdc++.h>
using namespace std;

int binarySubstring(string s)
{
    int x = 0, y = 0, c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            x++;
        else if (s[i] == '1')
            y++;
        if (x == y)
            c++;
    }
    if (x != y)
        return -1;
    return c;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    cout << binarySubstring(s);
    return 0;
}
