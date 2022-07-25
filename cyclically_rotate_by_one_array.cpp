// ROTATE AN ARRRY BY ONE
#include<bits/stdc++.h>
using namespace std;

// void rotate(int arr[], int n)
// {
//     int last=arr[n-1];
//     for(int i=n-2;i>=0;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[0]=last;
// }

int main(){
    vector<int>v{1,2,3,4,5,6,7,8,9};
    rotate(v.begin(),v.begin()+1,v.end());
    // rotate(v.begin(),v.end()-1,v.end());
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}