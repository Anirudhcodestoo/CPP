#include<iostream>
#include<string>
using namespace std;
bool reverse(string &str)
{
    int first=0,last=(str.length())-1;
    while(first<last)
    {
        if(str[first]!=str[last])
        return false;
        else 
        {
            first++;
            last--;
        }
    }
    return true;    
}
int main()
{
    int i;
    string str1;
    cout<<"enter your string";
    cin>>str1;
    string str2=str1;   
    reverse(str2.begin(),str2.end());
    if(str2==str1)
    return 1;
    cout<<reverse(str1);

    return 0;
}