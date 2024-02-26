#include <iostream>
using namespace std;

bool triplet(int a[], int n, int ele)
{
   
int m;
    for (m =0;m<n-2;m++)
    {
        int sum = 0;
        int i=m+1;
        int j=n-1;
        while (i < j)                ////////////////////here first sort then solve alse same time hence same time complexity
                                     // for unsorted array also first sort then solve   
        {
            sum = a[m] + a[i] + a[j];

            if (sum == ele)
                return true;

            else if (sum< ele)
            {
                i++;
            }

            else
            {
                j--;
            }
        }
        
    }
    return false;
}

int main()
{

    int i, beg, end, ele, n;

    cout << "enter your number of elements";
    cin >> n;
    int a[50];
    cout << "enter your elements";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "enter seaarching element";
    cin >> ele;

    cout << triplet(a, n, ele);

    return 0;
}