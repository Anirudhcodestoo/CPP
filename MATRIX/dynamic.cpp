#include <iostream>
using namespace std;


int main(){
    int *arr,size,i;
    cout<<"enter the numbre of values you want to stor";
    cin>>size;
        arr= new int[size];
     cout<<"enter values";

     for(i=0;i<size;i++)
     {
        cin>>arr[i];
     }
     cout<<"elements are";
     for(i=0;i<size;i++)
     {
        cout<<arr[i];
     }
    return 0;
}
