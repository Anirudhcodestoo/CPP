#include <iostream>
using namespace std;
void transpose(int *arr[],int rows,int columns )
{

    int i,j,temp[rows][columns];
//    for(i=0;i<rows;i++)
//    {                                           naive
//     for(j=0;j<columns;j++)
//     {
//         temp[j][i]=arr[i][j];
//     }
//    }



   //better
   for(i=0;i<rows;i++)
   {
    for(j=i+1;j<columns;j++)
     swap(arr[i][j],arr[j][i]);
    
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