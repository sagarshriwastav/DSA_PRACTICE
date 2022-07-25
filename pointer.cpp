#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	/*int a=199;
	int *b=&a;
	int *c=b;
	cout<<a<<" "<<*b<<" "<<b<<endl;
	cout<<a<<" "<<*b<<" "<<*c<<" "<<c<<endl;
	cout<<sizeof(b);*/

	//pointers in arrays

	int arr[10]={2,5,8,67};
	cout<<"11th "<<arr<<endl;
	cout<<"12th "<<&arr<<endl;
	cout<<"13th "<<*arr<<endl;
	cout<<"14th "<<*arr+1<<endl;
	cout<<"15th "<<*(arr+1)<<endl;
	cout<<"16th "<<*(arr)+1<<endl;

	int i=3;
	cout<<"21th "<<i[arr]<<endl;
	cout<<"22th "<<arr[i]<<endl;
	int x=3;
	int *f=&x;
	cout<<"23th "<<&x<<endl;
	cout<<"24th "<<&f<<endl;
	return 0;
}