#include<iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;// we can return either s or e bcoz both will be the same
    
}
int main(int argc, char const *argv[])
{
    int arr[5]={3,8,10,17,1};
    cout<<"pivot is"<<getPivot(arr,5);
    return 0;
}
