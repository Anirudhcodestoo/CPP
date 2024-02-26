#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
void countD(int arr[],int n)
{
unordered_map <int,int> s;
int i;
for(i=0;i<n;i++)
{
    s[arr[i]]=s[arr[i]]+1;
}
for(auto x:s)
cout<<x.first<<x.second;
}
int main()
{
    int i,n;
    int arr[50];
    cout<<"enter the count of the nu,ber of elements";
    cin>>n;
                                          //-------> initiliaze kya value pair as  0 like key value is 0. ordere not specific
     for(i=0;i<n;i++)
     {
        cin>>arr[i];
     }
   countD(arr,n);

}