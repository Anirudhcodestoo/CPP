#include<iostream>
#include<list>
#include<unordered_set>
#include<unordered_map>
using namespace std;
void countDD(int arr[],int arr2[],int n,int n2)
{
    int i;
    unordered_set<int> f(arr2 , arr2+n2);
    // for(i=0;i<n2;i++)
    // {
    //     f.insert(arr2[i]);
    // }

    //  auto it=f.begin();
    for(i=0;i<n;i++)
        {
        //     if(it!=f.end())
        //     {       
            
        //     if(arr[i]==*it)
        //     {
        //     cout<<arr[i];
        //     it++;
        //     f.erase(arr[i]);
        //     }

        // }
        // else
        // {
        //     break;
        // }
        if(f.find(arr[i])!=f.end())
        {
            cout<<arr[i];
            f.erase(arr[i]);
        }
        
    }
}
// void countD(int arr[],int arr2[],int n,int n2)
// {
// unordered_map <int,int> s;
// int i;
// for(i=0;i<n;i++)
// {
//     s[arr[i]]=s[arr[i]]+1;
// }

// for(i=0;i<n2;i++)
// {
//     s[arr2[i]]++;
// }

// for(i=0;i<n;i++)
// {
//     auto it=s.find(arr[i]);
//     if(arr[i]==it->first && (it->second)>1)
//    { 
//     cout<<(it->first);    
//      s.erase(arr[i]);
//    }
// }
// }
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
   countDD(arr,arr2,n,n2);

}





