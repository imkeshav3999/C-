#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int,string> m;
    m[1]="love";
    m[13]="babber";
    m[2]="kumar";

    m.insert({5,"bheem"});
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13 "<<m.count(13)<<endl;
    return 0;
}
