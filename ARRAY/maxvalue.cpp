    #include <iostream>
    #include <cmath>
    using namespace std;

   void max(int a[],int n,int dig)
    {
         int i,j=2;
         int max=-1;
         for(i=0;i<n-1;i++)
         {
            for(j=i+1;j<n;j++)
            {
                if(a[j]-a[i]>max)
                max=a[j]-a[i];
               
            }
            
         }
         cout<<max;

       
    }

    int efficient (int a[],int n)
    {
        int i;
        int max_diff=a[1]-a[0];
        int lowest=0; 

         // here one more loop wee must consider what happend when 1st element is smaller than second element
         
        for(i=1;i<n-1;i++)
        {
            if(a[i+1]-a[lowest]>max_diff)
            {
                if(a[i+1]<a[lowest])
                {lowest=i+1;} 
                max_diff=a[i+1]-a[lowest];
            }

        }
      
        return max_diff;
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
    
    cout<<efficient(a,n);
        

        return 0;
    }


 