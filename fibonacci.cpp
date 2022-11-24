#include <iostream>
#include <math.h>
using namespace std;

void fib(int n)
{
    int a=0, b=1, next;
    for (int i = 0; i < n; i++)
    {
        cout<<a<<endl;
        next=a+b;
        a=b;
        b=next;
    }
    
}

int main(int argc, char const *argv[])
{
    cout<<"enter n"<<endl;
    int n ;
    cin>>n;
    fib(n);
    return 0;
}
