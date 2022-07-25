#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return b;
}
int main()
{
    int a = 0, b = 20;
    int ans = gcd(a, b);
    cout << ans << endl;
    cout<<24%72<<endl;

    return 0;
}
/*Ques.-*/
// Another approach is