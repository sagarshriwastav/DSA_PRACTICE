#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int ans = 0;
	// vector<int> arr = {2,3,1,6,3,6,2};
	// vector<int> arr = {2, 4, 7, 2, 7};
	vector<int> arr = {1,3,1,3,6,6,7,10,7};
	for (int i = 0; i < arr.size(); i++)
	{
		ans = ans ^ arr[i];
	}
	cout<<endl<<ans<<endl;
	return 0;
}
/*Ques.-*/
// Another approach is