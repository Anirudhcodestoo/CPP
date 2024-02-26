#include<iostream>
#include<list>
#include<unordered_set>
using namespace std;
int pairsum(int arr[],int n,int sum)
{
    unordered_set<int> s;
    int i,presum=0;
    for(i=0;i<n;i++)
    {
        presum=presum+arr[i];  
        if(presum==0)
        return true;
        s.insert(presum);
        if(s.size()<i+1)
        return true;        
    }
    return false;
}

int main()
{
    int i,n,sum;
    int arr[50];
    cout<<"enter the count of the nu,ber of elements";
    cin>>n;
    cout<<"enter sum";
    cin>>sum;   
     for(i=0;i<n;i++)
     {
        cin>>arr[i];
     }
  cout<<pairsum(arr,n,sum);

}