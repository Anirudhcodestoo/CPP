#include <iostream>
using namespace std;

int median(int a[],int b[],int n1,int n2)
{

int begin1=0,end1=n1;
while(begin1<=end1)
{
int i1=beg2+end1/2;
int i2=(n1+n2+1)/2 -i1;

}
}
int main(){

int i,beg,end,ele,n1,n2,a[50],b[50];

cout<<"enter your number of elements";
cin>>n1;

cout<<"enter your elements";
for(i=0;i<n1;i++)
{
    cin>>a[i];  
}
cout<<"enter your number of elements";
cin>>n2;
for(i=0;i<n2;i++)
{
    cin>>b[i];  
}


cout<<"enter seaarching element";
cin>>ele;


cout<<median(a,b,n1,n2);
    
    return 0;
}