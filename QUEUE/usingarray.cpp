#include <iostream>
using namespace std;
struct queue
{
    int capp,i,front=0,*arr;

    queue(int cap)
    {
        arr= new int[cap];
        capp=cap;
    }
    void enque(int vall)
    {
        if(front==capp)
        return;
        else 
        {
         arr[rear]=vall;
         rear++;
        }
    }
    void dequeue()
    {
        if(front>rear)
        return;
        else{
            front++;
        }
    }
    int size()
    {
       return (rear-front+1);
    }
    int getfront()
    {
        return arr[front];
    }
    int getback()
    {
        return arr[rear];
    }
    bool isempty()
    {
        if(front>rear)
        return true;
        else return false;
    }

    
};

int main(){
    int arr[50];
    
    return 0;
}