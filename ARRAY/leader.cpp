    #include <iostream>
    #include <cmath>
    using namespace std;

   void leader(int a[],int n)
    {
         int i,j;
  
        for(i=0;i<n;i++)
        {
           for(j=i+1;j<n;j++)
           {
            if(a[i]<=a[j])
            break;
            if(j==(n-1))
            cout<<a[i]<<" ";
           }
           
        }
        cout<<a[n-1];
    }


    void effecient(int a[],int n)
    {
        
         int i,j;
       int leading=a[0];
        for(i=1;i<n;i++)
        {
            if(leading>a[i])
            {

            }
        }
    }

    void efficient(int a[], int n)
    {
        int i;
        int ini_leader=a[n-1];
        cout<<ini_leader<<" ";
        for(i=n-2;i>0;i--)
        {
            if(a[i]>a[ini_leader])
            {
                cout<<a[i]<<" ";
                a[ini_leader]=a[i];
            }
        }
    }

    int main(){
        int a[100];
    int n,x,j,dig;
    cout<<"enter the sizw of array";
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>a[j];
    }
       efficient(a,n);
       return 0;
    }


 