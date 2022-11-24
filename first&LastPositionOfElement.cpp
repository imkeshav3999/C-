#include <iostream>
#include <math.h>
using namespace std;
// to find the first element we have to go left, so, end = mid - 1
int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
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
    return ans;
}
// to find the last element we have to go right, so, start = mid + 1
int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1;
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
    return ans;
}
// total no. of occurance = (lastOcc - firstOcc) + 1
int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 5};
    cout << firstOcc(arr, 10, 3) << endl;
    cout << lastOcc(arr, 10, 3);
    return 0;
}
