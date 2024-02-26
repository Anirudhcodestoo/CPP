#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int lexiographic(string &str1)
{
    const int CHAR= 128;
    int i,count[CHAR]={0},fact=1,res=1,j;
    for(i=1;i<=str1.length();i++)
    fact=fact*i;
    for(i=0;i<str1.length();i++)
    count[str1[i]]++;
    for(i=1;i<CHAR;i++)
    count[i]=count[i]+count[i-1];   // --- cumulative sum;
    for(i=0;i<str1.length();i++)
    {
    fact=fact/(str1.length()-i);
    res=res+((count[str1[i]]-1)*fact);
    for(j=str1[i];j<CHAR;j++)
    count[j]--;
    }
return res;
    
}
int main()
{
    int i;
    string str1;
    cout<<"enter your string";
    cin>>str1;
    cout<<lexiographic(str1);

    return 0;
}