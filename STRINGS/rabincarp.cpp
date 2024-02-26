#include<iostream>
#include<algorithm>
#include<string>
typedef long long ll;
#define d 128
using namespace std;
void rabin(string &pat, string &text,int M,int N)
{
ll p=0,h=1,t=0;
int i,j,primee;
bool flag=false;
for(i=0;i<M-1;i++)
 h=h*d;
for(j=0;j<M;j++)
{
 p=((p*d) + pat[j])%primee;
 t=((t*d)+ text[j])%primee;
}
for(i=0;i<=N-M;i++)
{
if(p==t)
{
    for(j=0;j<M;j++)
    {
        if(pat[j]!=text[i+j])
        {
              flag=false;
              break;
        }
    }
    if(flag)
    cout<<i<<" ";

}
if(i<N-M)
{
t=(h*(t-(h*text[i]))+text[i+M])%primee;
if(t<0)
t=(t+primee)%primee;
}

}
}


int main()
{
    int i;
    string pat;
    cout<<"enter your string";
    cin>>pat;
    string text;   
    cout<<"enter your string you want to search";
    cin>>text;
    rabin(pat,text,pat.length(),text.length());

    return 0;
}