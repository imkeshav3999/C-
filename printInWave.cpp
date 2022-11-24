#include <iostream>
#include <vector>
using namespace std;

vector<int> print(vector<int> arr[][3], int nrow, int mcol)
{
    vector<int> ans;
    for (int col = 0; col < mcol; col++)
    {
        if (col & 1)
        {
            for (int row = nrow - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            for (int row = 0; row < nrow; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[3][3] = {{1, 11, 111}, {2, 22, 222}, {3, 33, 333}};
    vector<int> ans(arr, 3, 3);
    return 0;
}
