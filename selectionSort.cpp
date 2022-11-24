#include <iostream>
#include <math.h>
using namespace std;
// use selection sprt when the size of the array is small.
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    { // we are assuming the min value to be at i, ie, 0
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    return 0;
}
