#include <iostream>
using namespace std;
void transpose(int *arr[],int rows,int columns )
{

    int i,j;
  for(i=0;i<rows;i++)
  {
     for(j=i+1;j<columns;j++)
     {
        swap(arr[i][j],arr[j][i]);
     }
  }
  for(j=0;j<columns;j++)
  {
  int high=rows-1;
    for(i=0;i<(rows/2);i++)
    {
      swap(arr[high][j],arr[i][j]);
      high--;
    }
  }
  for(i=0;i<rows;i++)
  {
    for(j=0;j<columns;j++)
    cout<<arr[i][j];
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
     arr[i]=new int[i];
    for(j=0;j<columns;j++)
    {
        cin>>arr[i][j];
    }
  }
  transpose(arr,rows,columns);
    return 0;
}