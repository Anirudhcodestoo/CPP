#include<iostream>
// #include<stack>
// #include<string>
using namespace std;


class twostack
{
    int *arr;
    int cap,top1,top2;
public:
 twostack(int n)
 {
    arr=new int[n];
    cap=n;   
    top1=-1;
    top2=cap;
 }

 bool push1(int val)
 {
    if(top1+1<top2)
    {
    top1++;
    arr[top1]=val;
    return true;
    }
    return false;
 }
bool push2(int val)
{
    if(top2>1+top1)
    {
        top2--;
        arr[top2]=val;
        return true;
    }
    return false;
}
 int pop1()
 {
    if(top1==-1)
    return -1;
    {
    int x = arr[top1];
    top1--; 
    return x;
    }

 }
 int pop2()
 {
    if(top2==cap)
    return -1;
    {
        int y =arr[top2];
        top2++;
        return y;
    }
 }
 int size1()
 {
 return (top1+1);
 }
 int size2()
 {
 return (cap-top2);
 }


};

int main()
{
    twostack s(3);
    cout<<s.push1(5)<<endl;
    cout<<s.push2(6)<<endl;
    cout<<s.push2(9)<<endl;
    cout<<s.push2(8)<<endl;
    cout<<s.size1()<<endl;
    cout<<s.size2()<<endl;
    cout<<s.pop1()<<endl;
    cout<<s.pop1()<<endl;
    cout<<s.size1()<<endl;
    cout<<s.size2()<<endl;

return 0;
}