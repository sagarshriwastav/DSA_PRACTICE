#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    // void reverseString(vector<char> &s)
    void reverseString(string s)
    {
        int alow = 0;
        int bhigh = s.size() - 1;
        while (alow < bhigh)
        {
            char c = s[alow];
            s[alow] = s[bhigh];
            s[bhigh] = c;
            alow++;
            bhigh--;
        }
    }
};
int main()
{
    string d = "hello";
    // cin >> s;
    Solution ob;
    cout<<ob.reverseString(d);
    
}