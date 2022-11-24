#include <iostream>
#include <vector>
using namespace std;

int spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    // index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        // print starting row
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // print ending column
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // print ending row
        for (int index = endingCol; count < total && index <= endingCol; index++)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // print starting column
        for (int index = endingRow; count < total && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        endingRow--;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout<<spiralOrder(matrix,3,3);
    cout << "hi";
    return 0;
}
