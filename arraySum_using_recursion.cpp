#include<bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
int sum(int arr[],int n){
    if(n==0) return arr[0];
    return arr[n]+sum(arr,n-1);
}
int main()
{
    int arr[5]={2,4,6,7,9};
    int n=5;
    int ans=sum(arr,n-1);
    cout<<ans;
    return 0;
}