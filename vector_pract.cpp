#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(45);
    v.push_back(8);
    v.push_back(69);
    v.push_back(34);
    v.push_back(71);
    v.push_back(93);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.at(3) << endl;
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}