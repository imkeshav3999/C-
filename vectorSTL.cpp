#include <iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    cout<<"capacity :- "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity :- "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity :- "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity :- "<<v.capacity()<<endl;

    cout<<"Element at 2nd Index "<<v.at(2)<<endl;
    
    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size "<<v.size()<<endl;

    vector<int> a(5,1);
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

