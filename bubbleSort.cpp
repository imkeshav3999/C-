#include <iostream>
#include <math.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped = false;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        { // already sorted
            break;
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

    bubbleSort(arr, n);

    return 0;
}