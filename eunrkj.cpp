#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<vector<int>> matrix{
        {1, 2, 3},
        {11, 22, 33},
        {11, 22, 33},
        {11, 22, 33},
        {11, 22, 33},
        {11, 22, 33},
        {11, 22, 33},
        // {55, 66, 77, 89},
        // {5, 13, 12, 19},
        {40, 77, 91}};
    // cout << (matrix.size()*matrix[0].size()) << endl;
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int totalElement = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < totalElement)
    {
        // print starting row
        for (int index = startingCol; count < totalElement && index <= endingCol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            // ans.push_back(matrix[0][index]);
            count++;
        }
        startingRow++;

        // print ending column
        for (int index = startingRow; count < totalElement && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            // ans.push_back(matrix[index][col - 1]);
            count++;
        }
        endingCol--;

        // print ending row
        for (int index = endingCol; count < totalElement && index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            // ans.push_back(matrix[row - 1][index]);
            count++;
        }
        endingRow--;

        // print starting column
        for (int index = endingRow; count < totalElement && index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            // ans.push_back(matrix[index][0]);
            count++;
        }
        startingCol++;
    }

    for (auto it = ans.begin(); it != ans.end(); it++)
        cout << *it << endl;
    cout << "\"" << ans.size() << "\"" << endl;
    cout << "\a";
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans(i)<<" ";
    // }

    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = 0; j < matrix[0].size(); j++)
    //     {
    //         cout << matrix[i][j] << "  ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
