#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool anagram(string &str1,string &str2)
{
     sort(str1.begin(),str1.end());
     sort(str2.begin(),str2.end());
     if(str1==str2)
     return true;
     return false;

 
}
bool anagrame(string &str1,string &str2)
{
    if(str1.length()!=str2.length())
    return false;
     const int CHAR=128;
     int i,count[CHAR]={0};
     for(i=0;i<str1.length();i++)
     {
        count[str1[i]]++;
        count[str2[i]]--;
     }

     for(i=0;i<str1.length();i++)
     {
        if (count[i]!=0)
        return false;
     }
     return true;              
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
    cout<<anagrame(str1,str2);

    return 0;
}