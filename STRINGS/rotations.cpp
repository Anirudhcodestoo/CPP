#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool rotations(string &str1, string &str2)
{
    string temp = str1 + str1;
    return (temp.find(str2)!=(string::npos) && str1.length()== str2.length());
}

int main()
{
    int i;
    string str1;
    cout<<"enter your string";
    cin>>str1;
    string str2;   
    cout<<"enter your string you want to search";
    cin>>str2;
    cout<<rotations(str1,str2);

    return 0;
}