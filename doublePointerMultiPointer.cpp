#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int i = 8;
    int *p = &i;
    int **p2 = &p;
    int ***p3 = &p2;
    int ****p4 = &p3;
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    cout << ***p3 << endl;
    cout << ****p4 << endl;

    return 0;
}
/*Ques.-*/
// Another approach is