#include <iostream>
#include <queue>
using namespace std;
// first in first out
int main(int argc, char const *argv[])
{
    queue<string> q;
    q.push("Keshav");
    q.push("Kumar");
    q.push("Choudhary");

    cout << "size before pop " << q.size() << endl;
    cout << "first element " << q.front() << endl;
    q.pop();
    cout << "first element " << q.front() << endl;
    cout << "size after pop " << q.size() << endl;

    return 0;
}
