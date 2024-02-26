#include<iostream>
using namespace std;

void spiral(int *a[ ], int rows,int columns)
{
int tl=0,tr=columns-1,br=rows-1,bl=rows-1,i,j;

while(tl<(rows/2))
{
for(i=tl;i<tr;i++)
{
  cout<<a[tl][i];
}
tl++;
for(j=tr;j<=br-1;j++)
{
  cout<<a[tl][j];
}
tr--;
for(i=br;i<bl;i--)
{
cout<<a[br][i];
}
br--;

for(i=bl)
{
  cout<<a[i][bl]
}
bl++;
}

}

int main()
{

     int rows,columns,i,j;
         cout<<"enter number of columns";
         cin>>columns;
         cout<<"enter number of rows";
         cin>>rows;
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

         spiral(arr,rows,columns)
         
}