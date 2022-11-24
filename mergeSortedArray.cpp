#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    //printing the remaining elements of arr1, if there
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    //printing the remaining elements of arr2, if there
    while (j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}
void print(int arr3[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};
    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
    return 0;
}
