#include<iostream>
#include<string>
using namespace std;
bool subsequence(string &str1,string &str2)
{
    int i=0,j=0,len2=str2.length();
    for(;i<str1.length();i++)
    {
        if(str1[i]==str2[j])
        {
            if(j==len2-1)
            return true;
            j++;
        }
    }
    return false;

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
    cout<<subsequence(str1,str2);

    return 0;
}