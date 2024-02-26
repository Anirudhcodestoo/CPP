#include <iostream>
using namespace std;

int binary(int a[],int n,int ele)
{
bool visited[100]={0};
int i;
for(i=0;i<n;i++)
{
    if(visited[a[i]])
    return a[i];
    visited[a[i]]=true;
}return 0;


}

int effiient(int a,int n)
{
   while()
}

int main(){

int i,beg,end,ele,n;

cout<<"enter your number of elements";
cin>>n;
int a[n];
cout<<"enter your elements";
for(i=0;i<n;i++)
{
    cin>>a[i];  
}

cout<<"enter seaarching element";
cin>>ele;


cout<<binary(a,n,ele);
    
    return 0;
}