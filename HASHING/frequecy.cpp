#include<iostream>
#include<list>
#include<unordered_set>
using namespace std;
void countD(int arr[],int n)
{
unordered_set<int> s;
int i;
for(i=0;i<n;i++)
{
    s.insert(arr[i]);
}
cout<<s.size();
}
int main()
{
    int i,n;
    int arr[50];
    cout<<"enter the count of the nu,ber of elements";
    cin>>n;
    
     for(i=0;i<n;i++)
     {
        cin>>arr[i];
     }
   countD(arr,n);

}