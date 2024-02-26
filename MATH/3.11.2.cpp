    #include <cmath>
    #include <iostream>
    using namespace std;

    void power(int n, int x,int res)
    {
        
        int i;
    

    for(i=1;float(i)<=float(log2(x));i++)
    {
        res=res*n;
        if(i==log2(x))
        {
            x=x-i;
            return power(n,x,res);    

        }
        
    }
   return res;

    }

    int main(){
        int n,x,res=1;
        cout<<"enter input number";
        cin>>n;
        cout<<"enter number of which power must be raised";
        cin>>x;
        power(n,x,res);
        return 0;
    }
