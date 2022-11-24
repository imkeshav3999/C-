#include<iostream>
#include<stack>
using namespace std;
int main(int argc, char const *argv[])
{// last in first out
    stack<string> s;
    s.push("Keshav");
    s.push("Kumar");
    s.push("Choudhary");

    cout<<"Top element "<<s.top()<<endl;
    s.pop();
    cout<<"Top element "<<s.top()<<endl;
    cout<<"Size is "<<s.size()<<endl;
    cout<<"empty or not "<<s.empty()<<endl;
    

    return 0;
}
