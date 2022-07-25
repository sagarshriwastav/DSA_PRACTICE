#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
int main()
{
    vector<int> v = {2, 4, 5, 7, 8, 8, 5};
    vector<string> s = {"a","g","ft","g"};
    string a[6]="abcde";
    map<int, int> mp1;
    map<string, string> mp2;
    map<char, char> mp3;
    map<float, float> mp4;
    map<double, double> mp5;
    map<double, int> mp6;
    map<int, string> mp7;
    map<string, int> mp8;
    for (int i = 0; i < v.size(); i++)
        mp1[v[i]] = i;
    for (int i = 0; i < s.size(); i++)
        mp8[s[i]]++;
    for (int i = 0; i < s.size(); i++)
        mp8[s[i]]++;
    for (auto i : mp1)
        cout << i.first << " " << i.second << endl;
    for (auto i : mp8)
        cout << i.first << " " << i.second << endl;
    return 0;
}
