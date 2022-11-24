#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n-1; j++)
        {
            curr+=arr[j];
            cout<<curr<<endl;
        }
        
    }
    

    return 0;
}
