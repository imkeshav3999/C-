#include <iostream>
using namespace std;

// first find pivot
// check if it come in 1st line or 2nd line
// do binary search

int getPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key)
{
    int start = s, end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int findPosition(int arr[], int n, int k)
{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    { // BS on 2nd line
        binarySearch(arr, pivot, n - 1, k);
    }
    else
    { // BS on 1st line
        binarySearch(arr, 0, pivot - 1, k);
    }
}


int main(int argc, char const *argv[])
{
    int arr[] = {7, 9, 16, 1, 3};
    int key;
    cout << "enter key";
    cin >> key;
    cout << "position is " << findPosition(arr, 5, key);

    return 0;
}
