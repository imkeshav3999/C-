#include <iostream>
#include <math.h>
using namespace std;
int countSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        count += n & 1;
        n = n >> 1;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n = 8;
    cout << countSetBits(n);
    return 0;
}