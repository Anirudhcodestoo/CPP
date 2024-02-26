#include<iostream>
using namespace std;

void initialize()
{
    int i
    int table[0]=0;
    for(i=1;i<256;i++)
    {
        table[i]=table[(i&i-1)]+1
    }
}

int countsetbits(int n )
{
    return table[n&255]+
            table[n>>8 & 255]+
            tabke[n>>16 & 255]+
            table[n>>24];    // leading 24 bits are 0 anways since n is 32 bits
                            //  F\WE DO N& 255 BECUASE COMPARE ONLY LAST 8 BITS HENCE KEEP SHIFTING
                            // BUT WHEN LEADING 8 BITS ARE SHIFTED BY 24
                            // ONLY COMPARE WITH THE NOW SHIFTED FRONT 8 BITS WTIH TABLE ALR EXISTS
                            // HENCE ALL LEADING BITS WHEN RIGHT SHIFT DONE IS ZERO
                             
}

int main(){
    
    return 0;
}