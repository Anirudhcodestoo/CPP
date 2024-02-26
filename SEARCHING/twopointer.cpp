#include <iostream>
using namespace std;

bool twopointer(int a[],int n,int ele)
{
    int i=0,j=n-1,mid;
    mid=n-1/2;
        while(i<j)
    {

        if(a[i]+a[j]==ele)
        return true;

        else if(a[i]+a[j]<ele)
        {
            i++;
        }

        else
        {
            j--;
        }


    }
    return false;
       
    
}


int main(){

int i,beg,end,ele,n;

cout<<"enter your number of elements";
cin>>n;
int a[50];
cout<<"enter your elements";
for(i=0;i<n;i++)
{
    cin>>a[i];  
}

cout<<"enter seaarching element";
cin>>ele;


cout<<twopointer(a,n,ele);
    
    return 0;
}