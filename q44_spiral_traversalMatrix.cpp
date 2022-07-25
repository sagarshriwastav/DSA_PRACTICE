#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<vector<int>> matrix{
        {11, 22, 44, 55},
        {55, 23, 49, 44},
        {55, 66, 77, 89},
        {89, 45, 66, 69}};

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

        for (int i = startingCol; count < totalElement && i <= endingCol; i++)
        {
            cout << matrix[startingRow][i]<<endl;
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;
        for (int i = startingRow; count < totalElement && i <= endingRow; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;
        for (int i = endingCol; count < totalElement && i >= startingCol; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
        for (int i = endingRow; count < totalElement && i >= startingRow; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    // for (auto it = ans.begin(); it != ans.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    return 0;
}
