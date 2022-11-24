#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<"finding 6 :- "<<binary_search(v.begin(), v.end(),6)<<endl;
    cout<<"lower bound :- "<<lower_bound(v.begin(), v.end(),6)-v.begin()<<endl;
    cout<<"upper bound :- "<<upper_bound(v.begin(), v.end(),6)-v.begin()<<endl;
    string a = "qwert";
    reverse(a.begin(), a.end());
    cout<<a<<endl;
    rotate(v.begin(), v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}
