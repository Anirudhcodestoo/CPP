#include <iostream>
#include<cstring>
using namespace std;

void  power_set(string str)
{
 int i,j;
 int length=str.length();
 int powerset=pow(2,length);
 for(i=0;i<powerset;i++)
  {     
     for(j=0;j<length;j++)
     {
          if(i&(1<<j)!=0)
          cout<<str[j];
     }
     cout<<"\n";
  }  
}

int main(){
     int i,n;
     char s[30];
    cout<<"enter the number of array elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the elements";
        cin>>s[i];
    }

    power_set(s);

    
    return 0;
}