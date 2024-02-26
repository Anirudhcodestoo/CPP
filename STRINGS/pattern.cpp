#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void pattern(string &str1, string &str2)
{
    int i,start,j=0,m;
    bool flag=false;
    for(i=0;i<=(str1.length()-str2.length());i++)
    {
        for(j=0;j<str2.length();j++)
        {
           if(str1[i+j]!=str2[j])
           break;
           if(j==str2.length()-1)
           {
            flag=true;
           cout<<i<<" ";
           }

        }

    }
      
    if(flag==false)
    cout<<"NOT FOUND";
    
}

void improved(string &str1,string &str2)
{
    bool flag=true,flag2=false;
    int i=0,j=0,start;
    for(;i<str1.length()-str2.length();)
    {
        if(str1[i]!=str2[j])
        {
            flag=false;
        }
         while(str1[i]==str2[j])
         {
            flag2=true;
            start=i;
            if(j==str2.length()-1)
            {
            cout<<start<<" ";
            flag=true;
            break;
            }
            i++;
            j++;
         }
         j=0;
         if(flag2==false)
         {
         j=0;
         i++;
         }
    }
    if(flag==false)
    return;
}

int main()
{
    int i;
    string str1;
    cout<<"enter your string";
    cin>>str1;
    string str2;   
    cout<<"enter your string you want to search";
    cin>>str2;
    pattern(str1,str2);

    return 0;
}