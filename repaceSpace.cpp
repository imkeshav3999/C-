#include <iostream>
using namespace std;
//NOT WORKING
//DO IN THE SAME STRING, NO USING TEMP
int main(int argc, char const *argv[])
{
    cout << "enter string";
    string str = "";
    cin >> str;
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    cout<<temp;

    return 0;
}
