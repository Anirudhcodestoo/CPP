#include <iostream>
using namespace std;
void subsets(char s[][50],int n )
{
    if(n==0)
    {
        return 0;
    }
    cout<<s[n];
    n--;
    return subset(s[n]);    
}
int main(){
    char s[50];
    int  i,n;
    cout<<"enter the number of charectes in this string";
    cin>>n;
    cout<<"enter the word";
    for(i=0;i<n;i++)
    {cin>>s[i];}
    
    subsets(s,i);
    
    return 0;
}