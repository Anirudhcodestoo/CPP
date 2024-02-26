#include<iostream>
#include<list>
#include<unordered_set>
using namespace std;
bool pairsum(int arr[],int n,int sum)
{
    unordered_set<int> s(arr,arr+n);
 int i,need;
 for(i=0;i<n;i++)
 {
need=sum-arr[i];
  auto it=s.find(need);
  if(it!=s.end() && it!=s.find(arr[i]))
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