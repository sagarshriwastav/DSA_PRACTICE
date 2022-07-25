/*Question 3
sort() function is used to sort in ascending order by default.
in sort() function first */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    // sort(arr, arr + n,greater<int>()); if we want to sort in desc order.
    // 	cout<<*arr;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr[k - 1] << " " << arr[n - k];
    return 0;
}

/*num=int(input())
s=input()
dis=int(s[0])
mag=list(map(int,input().split(' ')))

if dis in mag:
    print("Possible",end='')
else:
    flag=0
    for x in range(0,num-1):
        s=0
        for y in range(x,num):
            s+=mag[y]
            if s==dis:
                flag=1
                break
    if flag==1:
        print("Possible",end='')
    else:
        print("Not Possible",end='')*/