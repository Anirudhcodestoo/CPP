// #include<iostream>
// using namespace std;
// int main()
// {
//     int t,a,b,c; cin>>t;
//     while(t--)
//    {
//      cin>>a>>b>>c;
//      if(a==b)
//      {
//         cout<<c<<'\n';
//         continue;
//      }
//      else if(a==c)
//      {
//          cout<<b<<'\n';
//         continue;
//      }
//      else{
//         cout<<a<<'\n';
//         continue;
//      }

    
//    }

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     int t; cin>>t;
//     const int CHAR=128;

//     string s1,s2,s3;
//     while(t--)
//     {
//         int count[CHAR]={0},i;
//         cin>>s1;
//         cin>>s2;
//         cin>>s3;
//         for(i=0;i<s1.length();i++)
//         count[s1[i]]++;
//         if(count['A']==0)
//         {
//         cout<<'A'<<"\n";
//         continue;
//         }
//         if(count['B']==0)
//         {
//         cout<<'B'<<"\n";
//         continue;
//         }
//         if(count['C']==0)
//         {
//         cout<<'C'<<"\n";
//         continue;
//         }

//         fill(count, count + CHAR, 0);
//          for(i=0;i<s1.length();i++)
//         count[s2[i]]++;
//         if(count['A']==0)
//         {
//         cout<<'A'<<"\n";
//         continue;
//         }
//         if(count['B']==0)
//         {
//         cout<<'B'<<"\n";
//         continue;
//         }
//         if(count['C']==0)
//         {
//         cout<<'C'<<"\n";
//         continue;
//         }

//        fill(count, count + CHAR, 0);
//          for(i=0;i<s1.length();i++)
//         count[s3[i]]++;
//         if(count['A']==0)
//         {
//         cout<<'A'<<"\n";
//         continue;
//         }
//         if(count['B']==0)
//         {
//         cout<<'B'<<"\n";
//         continue;
//         }
//         if(count['C']==0)
//         {
//         cout<<'C'<<"\n";
//         continue;
//         }
        

//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;

// int main(){
//     int t,i; cin>>t;
//     vector <int> logs;
//     while(t--)
//     {
//         float count=0;
//         long long int n;
//         cin>>n;
//         for(i=1;i<=n;i++)
//         {
//             int ele;
//             cin>>ele;
//            logs.push_back(ele);
//            count=count+ele;
//         }
//         if(floor(sqrt(count))==sqrt(count))
//         cout<<"YES"<<"\n";
//         else 
//         cout<<"NO"<<"\n";


//     }
//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int t,n;
    string word;
    cin>>t;
    while(t--)
    {
        cin>>n; 

        cin>>
    }
    return 0;
}