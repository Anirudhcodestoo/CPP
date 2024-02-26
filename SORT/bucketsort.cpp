#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


int bucket(int a[],int n,int k)
{
    int i,j,max;
    vector<int> bkt[k];
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        max=a[i];
    }
    max++;
    for(i=0;i<n;i++)
    {
        int bi=(k*a[i])/max;
        bkt[bi].push_back(a[i]);
    }
    for(i=0;i<k;i++)
    {
        sort(bkt[i].start(),bkt[i].end());
    }
    int ind=0;
    for(i=0;i<k;i++)
    {
            for(j=0;j<bkt.size();j++)
            {
                a[ind]=bkt[i][j];  
            }
    }
}


int main(){
    int k,n,i,a[50];

 cout<<"enter the number of elements";
 cin>>n;
 cout<<"enter the cnumber of buckts";
 cin>>k;
 cout<<"enter array elements";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }  

    cout<<bucket(a,n,k);


    return 0;
}