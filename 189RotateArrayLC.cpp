#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
class Solution
{
public:
    void reverse(vector<int> &arr, int low, int high)
    {
        while (low < high)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    void print(vector<int> &arr){
        for(int i=0; i<arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    void rotate(vector<int> &arr, int k)
    {
        int n = (int)arr.size();
        k = k % n;
        reverse(arr, 0, n - k - 1);
        print(arr);
        reverse(arr, n - k, n - 1);
        print(arr);
        reverse(arr, 0, n - 1);
        print(arr);
        // return 4;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Solution ob;
    vector<int> arr{1,2,3,4,5,6,7};
    // cout << ob.rotate(arr, 3) << endl;
    ob.rotate(arr, 3);
    return 0;
}
/*Ques.-*/
// Another approach is