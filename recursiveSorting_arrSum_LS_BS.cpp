#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
bool isSorted(int arr[], int n) // array is sorted or not
{
    if (n == 0 || n == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, n - 1);
        return remainingPart;
    }
}
int arrSum(int *arr, int n) // sum of array using recursion
{
    if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];
    int remainingPart = arrSum(arr + 1, n - 1);
    int ans = arr[0] + remainingPart;
    return ans;
}

bool search(int arr[], int n, int k)//linear search using recursion
{
    if (n == 0)
        return false;
    if (arr[0] == k)
        return true;
    else
    {
        int remainingPart = search(arr + 1, n - 1, k);
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {2, 3, 6, 7, 9};
    int n = 5;
    bool ans = isSorted(arr, n);
    cout << ans << endl;

    int sum = arrSum(arr, n);
    cout << sum << endl;

    int k = 2;
    int linearSearch = search(arr, n, k);
    string anss=linearSearch==true ? "present" : "absent";
    cout<<anss<<endl;


    return 0;
}