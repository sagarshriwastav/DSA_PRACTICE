#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<vector<int>> matrix;
    matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {11, 22, 33, 44}};
    int n = 3;
    int m = 4;
    int target;
    cout << "enter the target value" << endl;
    cin >> target;
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (target == matrix[i][j])
            {
                flag=1;
                cout << "Target Value Present" << endl;
            }
        }
        }
        if(flag==0){
            cout<<"Target value not found"<<endl;
        }
    cout << matrix.size() << endl;
    // cout << matrix[0].size() << endl;
    // cout << matrix[1].size() << endl;
    // cout << matrix[2].size() << endl;
    // cout<<matrix[0].length()<<endl;
    return 0;
}