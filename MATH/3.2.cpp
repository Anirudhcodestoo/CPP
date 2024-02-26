#include <iostream>
using namespace std;
void palindrome(int x,int n)
{
    int a[10],b[10],i;
    int count=0;
    for(i=0;i<n;i++)
    {
        cout<<"enter the digit";
        cin>>a[i];
    }
    
    
        for(i=0;i<n;i++)
         {
            b[i]=a[n-i-1];
         }
    for (int i = 0; i<n; i++)
       { if (a[i] == b[i])
         count++;
           }
           if(count==n)     
           cout<<"its a palidrome";
           else
           cout<<"not a palindrome";
}

int main(){
    int n,x;
    cout<<"enter the number you want to";
    cin>>x;
    cout<<"enter the number of digits";
    cin>>n;
    palindrome( x, n);
    return 0;
}