#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O(n1+n2+n3)
Space Complexity=O(n1+n2+n3)
inputs=>
4 9 9
10 20 40 90
6 7 8 9 10 11 12 20 90
3 4 15 20 30 40 70 90 120
outputs=>
20 90 */
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a[n1], b[n2], c[n3];
    for (int i = 0; i < n1; i++)
        cin >> a[i];
    for (int i = 0; i < n2; i++)
        cin >> b[i];
    for (int i = 0; i < n3; i++)
        cin >> c[i];

    unordered_map<int, int> m1, m2, m3;
    for (int i = 0; i < n1; i++)
        m1[a[i]]++;
    for (int i = 0; i < n2; i++)
        m2[b[i]]++;
    for (int i = 0; i < n3; i++)
        m3[c[i]]++;
    vector<int> v;
    // for(auto it:m1){
    //     cout << it.first << " " << it.second << endl;
    // }
    for (int i = 0; i < n1; i++)
    {
        // cout << (m1[a[i]] and m2[a[i]]) << endl;
        if (m1[a[i]] and m2[a[i]] and m3[a[i]])
        {
            v.push_back(a[i]);
            m1[a[i]] = 0;
        }
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}
/*Ques.-F ind Duplicate in 3 Sorted Array*/
// Another approach is