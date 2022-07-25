/* Question 1
Write a program to reverese an array or string.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter size of Array" << endl;
    int n;
    cin >> n;
    cout << "Enter element of Array" << endl;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x = 0;
    int y = n - 1;
    while (x < y)
    {
        swap(a[x], a[y]);
        x++;
        y--;
    }
    for (int i = 0; i < n; i++)

        cout << a[i] << " ";

    return 0;
}
// Time Complexity : O(n)

/*This program uses SWAP() function
and its syntax is swap(a,b)

swap() in C++
The function std::swap() is a built-in function in the C++ Standard Template Library (STL) which swaps the value of two variables.

Syntax:

swap(a, b)
Parameters: The function accepts two mandatory parameters a and b which are to be swapped. The parameters can be of any data type.

Return Value: The function does not return anything, it swaps the values of the two variables*/
