#include <iostream>
#include <algorithm>

using namespace std;

      struct point
      {
        int x,y;
      };
      int n=3;

      int my_fun(point p1, point p2)
      {
        return (p1.x<p2.x);
      }
int main(){
    // int arr[]={10,20,5,7};
    // int n=4;
    // sort(arr,arr+n);
    // for(int x : arr)
    //   cout<<x<<endl;
      
    //   sort(arr,arr+n, greater<int>());
    //   cout<<endl;
    //   for(int x : arr)
    //   cout<<x<<"  ";


      point arr[]={(5,9),(3,7),(4,3)};
      sort(arr,arr+n,my_fun);

      for(auto x: arr)
      cout<<x<<" ";
    return 0;
}