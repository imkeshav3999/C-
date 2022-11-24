#include <iostream>
#include <math.h>
using namespace std;

void print(int arr[], int n)
{
    int nonZero = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[nonZero]);
            nonZero++;
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {0, 3, 0, 12, 1};

    print(arr, 5);

    return 0;
}