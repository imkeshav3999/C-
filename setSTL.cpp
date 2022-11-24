#include <iostream>
#include <set>
using namespace std;
// all elemennts are unique. no modification(only in and out)
// elements are returned in sorted way.
// time complexity is O(log n)
int main(int argc, char const *argv[])
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(4);
    s.insert(4);
    s.insert(1);
    s.insert(3);
    for(auto i:s)
    {
        cout<<i<<" ";
    }

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"5 is present or not: "<<s.count(5)<<endl;
    
    set<int>::iterator itr = s.find(5);
    for(auto it = itr; it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
