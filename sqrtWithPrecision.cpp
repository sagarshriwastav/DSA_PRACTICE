#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/

int sqrtInteger(int n)
{
    int s = 0, e = n;
    long long int mid = s + (e - s) / 2, ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
            return mid;
        if (square > n)
            e = mid - 1;
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int tempsol = sqrtInteger(n);
    cout << "Answer is " << morePrecision(n, 3, tempsol) << endl;
    return 0;
}
/*Ques.-*/
// Another approach is