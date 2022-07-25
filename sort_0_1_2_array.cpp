#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        if (temp == 0 || temp == 1 || temp == 2){
            arr[i]=temp;
        }
    }
    sort(arr, arr + n);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}