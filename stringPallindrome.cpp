#include<iostream>
using namespace std;

bool palindrome(char a[], int n)
{
    int s=0, e=n-1;
    if(a[s]!=a[e])
    {
        return 0;
    }
    else
    {
        s++;e--;
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    char a[]={"noon"};
    cout<<palindrome(a,4);
    

    return 0;
}
