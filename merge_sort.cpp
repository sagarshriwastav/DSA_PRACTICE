#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O(nlogn)
Space Complexity=O(n)
inputs=>
outputs=>*/
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int k = s; // k=mainArrayIndex
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++]; // k=mainArrayIndex
    }
    k = mid + 1; // k=mainArrayIndex
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++]; // k=mainArrayIndex
    }
    int index1 = 0;
    int index2 = 0;
    k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index1 < len1)
    {
        arr[k++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e) /*BASE CASE(If array contains sinlge elements or contains
     no elements then it will considered as a sorted array)*/
        return;

    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);     // left part
    mergeSort(arr, mid + 1, e); // right part
    merge(arr, s, e);
}
int main()
{
    int arr[13] = {2, 2, 4, 5, 9, 24, 56, 56, 3, 5, 1, 6, 9};
    int n = 13;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}