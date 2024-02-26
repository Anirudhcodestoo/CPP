#include <iostream>
#include<cmath>
using namespace std;

int trail(int x)
{
    int fives=0;
    int tens=0;
    int fivess=0;
    int j;
  
    int trail,i;

    for(i=1;i<=x;i++)
    {
        if(i%5==0 && (i/5)!=2)
        {
            fives++;
        }
        for(j=1;j<i;j++)
         {
            if(pow(5,j)==i)
    {
        fivess=fivess+j-1;
    }
         }
        if(i%10==0)
        {
            tens++;
        }
    }

    trail=fives+tens+fivess;
    return trail;
}
int main(){
    int x;
    cout<<"enter the number ";
    cin>>x;
    cout<<trail(x);
    return 0;
}


