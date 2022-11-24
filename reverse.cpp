#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int ans = 0;

    while (n != 0)
    {
        int rem = n % 10;

        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }

        ans = ans * 10 + rem;
        n /= 10;
    }

    cout << ans;

    return 0;
}