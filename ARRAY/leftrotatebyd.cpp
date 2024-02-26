    #include <iostream>
    #include <cmath>
    using namespace std;

    // OR JUST LEFT ROTATE BY ONE POSITION CALL FUNCTON MULTIPLE TIMES      

   void leftrotatebyd(int a[],int n,int dig)
    {
         int i,k,m;
        int t[100];
        int beg=0;
         
        for(i=dig;i<n;i++)
        {
            t[i-dig]=a[i];
        }
        for(k=0;k<dig;k++)
        {
            t[n-dig+k]=a[k];
        }
        for(m=0;m<n;m++)
        {
            cout<<t[m];
        }
        
    }

    void effiecient (int a[],int n, int d)

    int main(){
        int a[100];
    int n,x,j,dig;
    cout<<"enter the sizw of array";
    cin>>n;
    cout<<"enter the digits by whihc transfer must happen";
    cin>>dig;
    for(j=0;j<n;j++)
    {
        cin>>a[j];
    }
    
    leftrotatebyd(a,n,dig);
        

        return 0;
    }


 