#include<iostream>
#include<list>
#include<unordered_map>
#include <algorithm>
using namespace std;
int _01(int arr[],int arr2[],int n,int n2,int sum)
{
  int i,curr_sum=0,len=0,maxlen,temp[50];
  unordered_map<int,int> s;

  for(i=0;i<n;i++)
  {
    temp[i]=arr[i]-arr2[i];
  }

  for(i=0;i<n;i++)
  {
    curr_sum=curr_sum+arr[i];
    if(curr_sum==sum)
    {
    len=i+1;
    }

    if(s.find(curr_sum-sum)!=s.end())
    {
    auto it=s.find(curr_sum-sum);
    len=i-(it->second);
    }
 
    if(s.find(curr_sum)==s.end())
    s[curr_sum]=i;
  maxlen=max(len,maxlen);
  }
  return maxlen;

}
int main()
{
    int i,n,sum,n2;
    int arr[50],arr2[50];
    cout<<"enter the count of the number of elements";
     cin>>n;
    cout<<"enter the count of the number of elements";
     cin>>n2;
    cout<<"enter the sum wanna finds";
    cin>>sum;
                                          //-------> initiliaze kya value pair as  0 like key value is 0. ordere not specific
     for(i=0;i<n;i++)
     {
        cin>>arr[i];
     }
     for(i=0;i<n;i++)
     {
        cin>>arr2[i];
     }

   cout<<_01(arr,arr2,n,n2,sum);

}