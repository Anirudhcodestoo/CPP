#include<iostream>
#include<list>
#include<unordered_map>
#include<unordered_set>
#include <algorithm>
using namespace std;
int maxx(int arr[],int n,int sum)
{
   unordered_set<int> s(arr,arr+n);
   int i,j,count=0,maxlen=0;
   for(i=0;i<n;i++)
   {
     if(s.find(arr[i]-1)==s.end())
     {
        count=1;
     }
     if((s.find(arr[i]+1) != s.end()))
     {
        for(j=1;j<n;j++)
        {
            auto it=s.find(arr[i]+j);
            if(it!=s.end())
            count++;
            else break;
        }
     }
     maxlen=max(maxlen,count);
   }
   return maxlen;

}
int main()
{
    int i,n,sum;
    int arr[50],arr2[50];
    cout<<"enter the count of the number of elements";
     cin>>n;
    cout<<"enter the sum wanna finds";
    cin>>sum;
                                          //-------> initiliaze kya value pair as  0 like key value is 0. ordere not specific
     for(i=0;i<n;i++)
     {
        cin>>arr[i];
     }

   cout<<maxx(arr,n,sum);

}