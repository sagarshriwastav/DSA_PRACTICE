#include <bits/stdc++.h>
using namespace std;
void func(string t, int i, int n, string s)
{
    if (i == n)
    {
        cout << t << endl;
    }
    else
    {
        func(t, i + 1, n, s);
        t = t + s[i];
        func(t, i + 1, n, s);
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // string s1,s2;
    // cin>>s1>>s2;
    // cout<<s1.size()<<" "<<s1.length()<<endl;
    // cout<<s2.size()<<" "<<s2.length()<<endl;

    string s;
    cin >> s;
    func("", 0, s.size(), s);

    return 0;
}