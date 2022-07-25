#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int num;
    cin >> num;
    string s;
    cin >> s;
    int dis = s[0];
    vector<int> arr;
    for (int i = 0; i < s.size(); i++)
    {
        arr.push_back(i);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Possible";
        cout << " ";
    }
    else
    {
        int flag = 0;
        for (int x = 0; x < num - 1; x++)
        {
            int s = 0;
            for (int y = 0; y < num; y++)
            {
                s += mag[y];
                if (s == dis)
                {
                    int flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "Possible"
                 << " ";
        }
        else
        {
            cout << "Not Possible"
                 << " ";
        }
    }
    return 0;
}
}