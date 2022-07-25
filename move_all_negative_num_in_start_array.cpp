// A C++ program to put all negative
// numbers before positive numbers
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}

// A utility function to print an array
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Driver code
int main()
{
    int arr[] = {3, 4, 5, 2, -6, -2, -7};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printarray(arr, n);
    return 0;
}
