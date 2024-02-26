#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void reversee(string &str)
{
    int i,newbegin=0;
    for(i=0;i<str.length();i++) 
    {
        if(str[i] == ' ' )
        {
                 reverse(str.begin()+newbegin,str.begin()+(i));
                 newbegin=i+1;
        }
       if(i==(str.length())-1)
       reverse(str.begin()+newbegin,str.begin()+(i+1));
    }

    reverse(str.begin(),str.end());
    cout<<str;
}
int main()
{
    int i;
    string str1;
    cout<<"enter your string";
    getline(cin,str1); 
    reversee(str1);

    return 0;
}