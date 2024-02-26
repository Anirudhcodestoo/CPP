#include <iostream>
using namespace std;

int check(char s[],int n)
{
    int i;
    for(i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-1])
        break;
        n--;
        
    }
    return 0;
}
int main(){
       char s[50];
    int  i;
    
    
 cout<<"enter the word";
    for(i==0;i<50;i++)
    cin>>s[i];
    check(s,i);
    return 0;
}