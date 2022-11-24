#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum=0, on=n;
    while (n != 0)
    {
        int rem = n%10;
        sum+=pow(rem,3);
        n/=10;


    }
    if (on==sum)
    {
        cout<<sum<<" is a armstrong no";
    }


    return 0;
}