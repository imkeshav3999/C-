#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int c = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "not prime";
            c++;
            break;
        }
    }
    if (c == 0)
    {
        cout << "prime no";
    }

    return 0;
}
