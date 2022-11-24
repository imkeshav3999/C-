#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][3], int n, int m)
{
    cout << "printing sum" << endl;
    // row. for column sum replace i and j
    for (int i = 0; i < 3; i++)
    {
        int maxi = INT_MAX;
        int rowIndex = -1;
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

int largestRowSum(int arr[][3], int n, int m)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "Maxi is" << maxi << endl;
    return rowIndex;
}

int main(int argc, char const *argv[])
{
    int arr[3][3];
    int target;
    cout << "enter elements";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // cout<<"enter target";
    // cin>>target;

    // if (isPresent(arr,target,3,3))
    // {
    //     cout<<"element found";
    // }
    // else
    // {
    //     cout<<"element not found";
    // }
    // return 0;

    printSum(arr, 3, 3);
    cout << "row with highest sum " << largestRowSum(arr, 3, 3);
}
