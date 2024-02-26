#include <iostream>
using namespace std;
void search(int *arr[],int rows,int columns,int ele )
{
int i,j;
for(i=0;i<rows;i++)
{
    if(ele==arr[i][i])
    {
    cout<<"found at"<<i<<"row"<<i<<"cokumns";
    return;
    }

    if(ele<arr[i][i])
    break;

    if(ele>arr[i][i] && ele<arr[i+1][i+1])
    break;

}

if(i==rows-1)
{
    cout<<"element not found";
    return;
}
for(j=0;j<columns;j++)
{
    if(arr[i][j]==ele)
    {
    cout<<"found at"<<i<<"row"<<j<<"cokumns";
    return;
    }
}

cout<<"not found";

}

int main(){
    int rows,columns,ele;
    cout<<"enter number of rows";
    cin>>rows;
    cout<<"enter numbre of columns";
    cin>>columns;
    cout<<"emter the searching element ";
    cin>>ele;

  int *arr[rows],i,j;

  for(i=0;i<rows;i++)
  {
     arr[i]=new int[i];
    for(j=0;j<columns;j++)
    {
        cin>>arr[i][j];
    }
  }
 search(arr,rows,columns,ele);
    return 0;
}