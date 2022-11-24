#include <iostream>
using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}
char toLowerCase(char ch)
{
    char temp;
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        temp = ch - 'A' + 'a';
    }
    return temp;
}

bool palindrome(string a)
{
    int s = 0;
    int e = a.length() - 1;
    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    string s = {"A man, a plan, a canal: Panama"};
    // faltu characters hatado
    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
    // lowercase me kardo
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }

    // palindrome
    cout << palindrome(temp);

    return 0;
}
