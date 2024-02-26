#include <iostream>
using namespace std;
void snake(int *arr[],int rows,int columns )
{
    int i,j;
  for(i=0;i<rows;i++)
  {
    cout<<"\n";
     if(i%2==0)
     {
        for(j=0;j<columns;j++)
        {
        cout<<arr[i][j]<<" ";
        }
     }
     else{
        for(j=columns-1;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";
        }
     }
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
  snake(arr,rows,columns);
    return 0;
}