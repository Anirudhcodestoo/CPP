#include<iostream>
#include<list>
#include<unordered_set>
using namespace std;
int unionn(int arr[],int arr2[],int n,int n2)
{
    int i;
unordered_set <int> s(arr2,arr2+n2);
for(i=0;i<n;i++)
{
    s.insert(arr[i]);

}
return s.size();
}
int main()
{
    int i,n,n2;
    int arr[50],arr2[50];
    cout<<"enter the count of the nu,ber of elements";
     cin>>n;
    cout<<"enter the count of the nu,ber of elements";
    cin>>n2;
                                          //-------> initiliaze kya value pair as  0 like key value is 0. ordere not specific
     for(i=0;i<n;i++)
     {
        cin>>arr[i];
     }
      for(i=0;i<n2;i++)
     {
        cin>>arr2[i];
     }
   cout<<unionn(arr,arr2,n,n2);

}