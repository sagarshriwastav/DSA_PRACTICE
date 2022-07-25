#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
int fact(int n)
{
    if (n == 1)
        return n;
    // int factorial = n * fact(n - 1);
    // return factorial;// both line are same
    return n * fact(n - 1);
}
void print(int n){
    if(n==0)
    return ;
    cout<<n<<endl;
    print(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    print(n);
    return 0;
}