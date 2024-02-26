#include <iostream>
#include <deque>
using namespace std;

int main(){
        deque <int> dq = {10,20,30};
        for(auto x: dq)
        cout<<" "<<x.first<<" "<<x.second;
        return 0;
    
    return 0;
}