    #include <iostream>
    using namespace std;

    void cycleDistinct(int a[],int n)
    {
        int cs,pos,item,i;
        for(cs=0;cs<n-1;cs++)
        {
              item=a[cs];
              for(i=cs+1;i<n;i++)
              {
                if(a[i]<item)
                pos++;
              }
             swap(a[pos],item);

             while(pos!=cs)
             {

                pos=cs;
                for(i=pos+1;i<n;i++)
                {
                    if(a[i]<item)
                    pos++;
                }
                swap(item,a[pos]);  
             }
        }
        for(i=0;i<n;i++)
        cout<<a[i];
    }


    int main(){
        int k,n,i,a[50];

    cout<<"enter the number of elements";
    cin>>n;
    cout<<"enter the kth smallest elemetn you wan to find out";
    cin>>k;
    cout<<"enter array elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }  

        cycleDistinct(a,n);


        return 0;
    }