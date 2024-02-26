#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int i,T,A,B,C,D,count=0,res;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B;
	    
	    if(A%B==0)
	    {
	    cout<<0<<"\n";
	    continue;
	    }
	    if(A<B)
	    {
	        C=A;
	        D=B;
	        while(D!=1)
	        {
	            D--;
	            C++;
	            count++;
	            if(C%D==0)
	            {
	                cout<<count<<"\n";
	                break;
	            }
	            
	        }
	            count=0;
	  
	    }
	    
	    else
	    {
	        C=A;
	        D=B;
	        while(D!=1)
	        {
	            D--;
	            C++;
	            count++;
	            if(C%D==0)
	            {
	               res=count;
	                break;
	            }
	            
	        }
	            count=0;
	            C=A;
                D=B;
                while(C!=1)
                {
                    if(C<D)
                    break;
                    C--;
                    D++;
                    count++;
                    if(C%D==0)
	            {
	               res=min(res,count);
	                break;
	            }
                }
                    cout<<res<<"\n";
            
          
	    }
	    
	  }
	return 0;
	    
	    
	}

