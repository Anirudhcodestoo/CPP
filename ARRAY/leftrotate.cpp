    #include <iostream>
    #include <cmath>
    using namespace std;

    void left(int a[], int n)
    {
        int i,j;
    int c=a[0];
    for(i=1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=c;
    for(j=0;j<n;j++)
    {
        cout<<a[j];
    }

    }

    int main(){
        int a[100];
    int n,x,j;
    cout<<"enter the sizw of array";
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>a[j];
    }
    
    left(a,n);
        

        return 0;
    }