#include<iostream>
#include<vector>
#include<array>
#include<list>
using namespace std;
int main()
{
    array<int,4> a={1,2,3,4};
    cout<<a.size();
    cout<<a.at(2)<<"at( here index of ehich leemnt give that returns)";
    cout<<a.empty();
    cout<<a.front();
    cout<<a.back();
    //vector afterfilled doubles its size and creates new vector and copies it to new array;


    vector<int> vect1;
    cout<<v.capacity();
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(9);
    v.push_back(0);
    cout<<v.capacity();
    cout<<v.size();

    //size , capatiy means for how much is memory allocated


    list<int> list1;
    list<int> list1(7);  // ----------- empty but size of 7


}