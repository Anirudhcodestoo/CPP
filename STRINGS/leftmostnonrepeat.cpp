#include<iostream>
#include<algorithm>
#include<climits>
#include<string>
using namespace std;
int leftrepeat(string &str)
{
   const int CHAR=128;
   int i,visited[CHAR],res=INT_MAX;
   fill(visited,visited+CHAR,-1);
   for(i=0;i<str.length();i++)
   {
     if(visited[str[i]]==-1)
     visited[str[i]]=i;

     if(visited[str[i]]>=0)
     visited[str[i]]==-2;
   }

   for(i=0;i<CHAR;i++)
   {
    if(visited[i]>=0)
     res=min(res,visited[i]);
   }
   return (res==INT_MAX) ? -1 : visited[i];
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
    cout<<leftrepeat(str1);

    return 0;
}