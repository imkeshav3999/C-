#include <iostream>
using namespace std;

void print(int arr[], int n, int k)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 3;
    print(arr, 5, k);

    return 0;
}