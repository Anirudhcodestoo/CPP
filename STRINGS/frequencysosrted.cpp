#include<iostream>
#include<string>
using namespace std;
void frequency(string &str1)
{
    int count[26]={0};
    int i;
    for(i=0;i<str1.length();i++)
    {
         count[str1[i]-'a']++;
    }
    for(i=0;i<str1.length();i++)
    cout<<(char)(i+'a')<<count[i];
}

int main()
{
    int i;
    string str1;
    cout<<"enter your string";
    cin>>str1;
    string str2;
     cout<<"enter your searching subsequence";
    cin>>str2;
    frequency(str1);

    return 0;
}