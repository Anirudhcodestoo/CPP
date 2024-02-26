#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool funmatch(char a , char b)
{
    if( (a =='(' &&  b==')')|| ( a =='{' &&  b=='}') ||   (a =='[' && b==']'))
                return true;
return false;
}
int main()
{
    int i;
    stack<char> s;
    string strr;

    cout<<"enter your string";
    cin>>strr;
    for(i=0;i<strr.length();i++)
    {
    
        if(strr[i]=='(' || strr[i]=='{' || strr[i]=='[')
        s.push(strr[i]);
        
        else if(s.empty())
        {
        cout<<"NO";
        break;
        }

        else if (funmatch(s.top(),strr[i]))
        s.pop();
        
        else if(funmatch(s.top(),strr[i])==false)
        break;
        


    }
        if(s.empty()  && (i==strr.length()))
        cout<<"YES";

    if(!s.empty())
        cout<<"NO";
    
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // while(s.empty()==false)
    // {
    // cout<<s.top();
    // s.pop();
    // }
    return 0;

}   