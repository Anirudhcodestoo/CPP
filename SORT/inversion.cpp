#include <iostream>
#include <cmath>
using namespace std;
int res=0;
int merge_count(int a[],int l,int m,int r)
{

   int i,o=0,j;
   int left[50],right[50];
   for(i=l;i<=m;i++)
   {
      a[0]=left[i];
      o++;
   }

   for(j=m+1;j<=r;j++)
   {
      a[o]=right[j];
      o++;
   }

i=0,j=0;
int k=0;
   while(i<=m || j<=r)
   {
      if(a[i]<a[j] && i<=l)
      {
         a[k]=right[j];
         j++;
         k++;
      }
      if(a[i]==a[j])
      {
        a[k]=left[i];
        i++;
        k++;
        a[k]=right[j];
        j++;
        k++;

      }
      if(a[i]>a[j] && j<=r)
      {
         a[o]=right[j];
         j++;
         o++;
         res=res+((r-l+1)-i);
      }
   }
   return res;
}

int merge(int a[],int l,int r)
{
   if(r>l)
   {
      int m=l+((r-l)/2);
      merge(a,l,m);
      merge(a,m+1,r);
      res=res+merge_count(a,l,m,r);
   }
   return res;
}

int main(){
    int n,i,a[50];
 cout<<"enter number of elements ";
 cin>>n;
 cout<<"enter array elements";
 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }
   cout<<merge(a,0,n-1);

    return 0;
}



