#include <iostream>
using namespace std;

int gcd(int inp1, int inp2)
 {
    int i,j,k;
    int prime1[20],prime2[20],a[20],b[20],c[20];
    if (inp1%inp2 == 0)
     return inp1;
     if (inp2%inp1==0)
      return inp2;

      for(i=0;i<=inp1;i++)
{
    if(inp1%i==0){
        for (j=0;j<=i;j++)
        {
            cin>>a[j];
        }
    }
}
     for(i=0;i<=inp1;i++)
{
    if(inp2%i==0){
        for (j=0;j<=i;j++)
        {
            cin>>b[j];
        }

        for(j=0;j<i;j++)
        {
            if(a[j]==b[j])
            {
              for(k=0;k<j;k++)
              {
                c[k]=a[j];
              }
            }
        }
    }
        
        int result=1;
 for(k=0;k<j;k++)
 {
    result=result*c[k];
 
    if(c[k]==0)
    result=1;
 }
 return result;
    
    
}

int main()
{
    int inp1,inp2;
    cout<<"enter inpus";
    cin>>inp1>>inp2;
    cout<<gcd(inp1,inp2);
    
    return 0;
}

