#include <iostream>
using namespace std;

    int count(int x)
    {
        int digit=0;
        
        int i,n;
        n=x;
        for(i=n;abs(i)>0;i=(int)n)
        {
            n=n/10;
            digit=digit+1;
        }
      return digit;
    }

    int main()
    {
        int x,f;
        cout<<"enter your number";
        cin>>x;
        f=count(x);
        cout<<"no of digits is"<<f;
        return 0;
    }
 
