#include <iostream>
using namespace std;
bool palindrome(string &str, int start, int end){
if(start>=end)
return true;
return ( str[start]==str[end] )&& palindrome(str,start+1,end-1);

}


int main(){
    char s[50];
    int  i;
    
 cout<<"enter the word";
    for(i==0;i<50;i++)
    cin>>s[i];
    palindrome(n,0,n-1)
    
    return 0;
}
