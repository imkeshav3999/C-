#include <iostream>
#include <math.h>
using namespace std;

bool check(int x, int y, int z)
{
    int b, c;
    int a = max(x, max(y, z));
    if (x == a)
    {
        b = y;
        c = z;
    }
    else if (y == a)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a*a == b*b+c*c) 
    {
        return true;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int x, y, z;
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
