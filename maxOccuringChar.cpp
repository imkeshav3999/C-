#include<iostream>
using namespace std;
char maxOccuringChar(string s)
{
    int arr[26]={0};
    //create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        //lowercase
        int number = 0;
        if(ch>='a'&&ch<='z')
        {
            number = ch-'a';
        }
        //uppercase
        else
        {
            number = ch-'A';
        }
        
        arr[number]++;
    }

    //find maximum occ character
    int maxi=-1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi  = arr[i];
        }
    }
    
    return 'a'+ ans;
}

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    cout<<maxOccuringChar(s);
    return 0;
}
