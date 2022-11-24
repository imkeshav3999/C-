#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = row - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int element = matrix[mid / col]/*index/column size*/[mid % col];

        if (element == target)
        {
            return 1;
        }
        else if (target > element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}
int main(int argc, char const *argv[])
{

    return 0;
}
