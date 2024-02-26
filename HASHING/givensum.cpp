#include<iostream>
#include<list>
#include<unordered_set>
using namespace std;
bool given(int arr[],int n,int sum)
{
    int i;
unordered_set <int> s;
int presum=0;
for(i=0;i<n;i++)
{
  presum=presum+arr[i];
  if ( presum==sum )
  return true;
  s.insert(presum);
  if(s.find(presum-sum)!=s.end())
  return true;
}
return false;
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

   cout<<given(arr,n,sum);

}