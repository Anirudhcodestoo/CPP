#include <iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.front();
    cout<<q.back();
    q.pop();
    cout<<q.front();
    cout<<q.back();
    cout<<q.size();
    q.pop();
 


    return 0;
}