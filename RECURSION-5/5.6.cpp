#include <iostream>
using namespace std;

int factorial(int inp,int res)
{
 
  if(inp==0||inp==1)
  return res;
  else
  {
  res=res*inp;
  return factorial(inp-1,res);
  }
    
     int fact(int inp)
      {
        if(n==1)
        return 1;

        return fact(n-1)*fact(n-2);
      }

}
int main(){
    int inp;
    cout<<"enter input vlaue";
    cin>>inp;
    cout<<factorial(inp,1);
    return 0;
}