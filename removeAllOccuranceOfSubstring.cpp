#include <iostream>
using namespace std;

string remove(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(int argc, char const *argv[])
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout<<remove(s,part);
    return 0;
}
