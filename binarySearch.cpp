#include <iostream>
#include <math.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s)/2; //doing it for larger nos. Not using (s+e)/2.
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
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n;
    int key;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter key" << endl;
    cin >> key;
    cout << binarySearch(arr, n, key) << " position";
    return 0;
}
