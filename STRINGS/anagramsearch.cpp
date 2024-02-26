#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool anagrame(string &str1,string &str2)
{
      int hashh1=0,hashh2=0,i;
      for(i=0;i<str2.length();i++)
      {
      hashh1=str2[i]+hashh1;
      hashh2=str1[i]+hashh2;
      }
      for(i=str2.length();i<str1.length();i++)
      {
       hashh2=str1[i]+hashh2-str1[i-str2.length()];
       if(hashh2==hashh1)
       return true;
      }
      return false;
}
int main()
{
    int i;
    string str1;
    cout<<"enter your string";
    cin>>str1;
    string str2;
     cout<<"enter your searching subsequence";
    cin>>str2;
    cout<<anagrame(str1,str2);

    return 0;
}