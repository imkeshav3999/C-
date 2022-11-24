#include <iostream>
using namespace std;
int binarySearch(int n)
{
    int s = 0, e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            s = mid + 1;
            ans = mid;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int decimal(int n, int point, int integer)
{
    int factor = 1;
    int ans = integer;
    for (int i = 0; i < point; i++)
    {
        factor = factor/10;
        for (int j = ans; j*j < n; j=j+factor)
        {
            ans = j;
        }
        
    }
    return ans;
    
}
int main(int argc, char const *argv[])
{
    cout<<"hi";
    int integer = binarySearch(36);
    int answer = decimal(101,3,integer);
    cout<<"Ans is "<<answer;
    cout<<"hi";
    return 0;
}
