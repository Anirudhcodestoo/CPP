#include<iostream>
using namespace std;

void sorted(int *a[ ], int rows,int columns,int searching)
{
int i=0,j=0,k,m;
for(i=0;i<rows-1;i++)
{
    if(a[i][j]==searching)
   { cout<<i;
    return;}
    break;
 if(a[i][j]>searching)
 break;
 j++;
}
i--,j--;
for(k=i;k<rows;k++)

{
    for(m=j;m<columns-1;m++)
    {
    if(a[i][j]==searching)
    {
    cout<<"found at"<<i<<j;
    return;
    }
    }
}

cout<<"not found";    
}

int main()
{

     int rows,columns,i,j,searching;
         cout<<"enter number of columns";
         cin>>columns;
         cout<<"enter number of rows";
         cin>>rows;
         cout<<"enter searching elemnt";
         cin>>searching;
         int *arr[rows];
         for(i=0;i<rows;i++)
         {
             arr[i]=new int[columns]; 
          {
            for(j=0;i<columns;j++)
            {
              cin>>arr[i][j];
            }
          }
         }
        sorted(arr,rows,columns,searching);
         
}
