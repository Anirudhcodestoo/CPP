#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int leftrepeat(string &str)
{
   const int CHAR=128;
//    int ind[CHAR];
//    fill(ind,ind+CHAR,-1);
//    int i,res=INT_MAX;
//    for(i=0;i<str.length();i++)
//    {
//         if(ind[str[i]] == -1)
//         ind[str[i]]=i;
//         else 
//         res=min(res,ind[str[i]]);
//    }

bool ind[CHAR];
fill(ind,ind+CHAR,false);
int i,res=-1    ;
for(i=str.length()-1;i>-1;i--)
{
    if(ind[str[i]]==false)
    ind[str[i]]=true;
    else{
        res=i;
    }
    }
return res;
}
int main()
{
    int i;
    string str1;
    cout<<"enter your string";
    cin>>str1;
    cout<<leftrepeat(str1);

    return 0;
}