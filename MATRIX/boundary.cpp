#include <iostream>
using namespace std;
void boundary(int *arr[],int rows,int columns )
{
    int i,j;
  // for(i=0;i<rows;i++)
  // {

  //   if(i==0)
  //   {
  //   for(j=0;j<columns;j++)
  //   {
  //   {
  //       cout<<arr[i][j]<<" ";
  //   }
  //   }
  //   }
  //    else if(i<rows-1 && i!=0)
  //      cout<<arr[i][columns-1]<<" ";

  //   else 
  //   {
  //       for(j=columns-1;j>=0;j--)
  //       cout<<arr[i][j]<<" ";
  //   }
    
  // }

  // for(i=rows-2;i>0;i--)
  // {
  //   cout<<arr[i][0]<<" ";
  // }
if(rows==1)
{
for(j=0;j<columns;j++)
{  
  cout<<arr[0][j]<<" ";
}
}
if(columns==1)
{
for(j=0;j<rows;j++)
{  
  cout<<arr[j][0]<<" ";
}
}



for(i=0;i<columns;i++)
{
  cout<<arr[0][i]<<"  ";
}
for(i=0;i<rows-1;i++)
{
  cout<<arr[i][columns-1]<<" ";
}
for(j=columns-1;j>=0;j--)
{
  cout<<arr[rows-1][j]<<" ";
}
for(i=rows-2;i>0;i--)
{
cout<<arr[i][0]<<" ";
}

  
    
}

int main(){
    int rows,columns;
    cout<<"enter number of rows";
    cin>>rows;
    cout<<"enter numbre of columns";
    cin>>columns;

  int *arr[rows],i,j;

  for(i=0;i<rows;i++)
  {
     arr[i]=new int[columns];
    for(j=0;j<columns;j++)
    {
        cin>>arr[i][j];
    }
  }
  boundary(arr,rows,columns);
    return 0;
}