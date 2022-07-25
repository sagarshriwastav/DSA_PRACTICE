#include<bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
int getSum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The sum is "<<getSum(arr,n)<<endl;
    return 0;
}