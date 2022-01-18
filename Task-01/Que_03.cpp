#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int q;
    cin>>q; 
  // Taking Number of test cases and running loop until it ends 
    while(q--)
    {
      // Taking input 
        int n,sum=0,i=1;
        cin>>n;
      // adding until the sum is less then or euall to number of boxes .
        while(sum<=n)
        {
            sum=sum+i;
            i++;
        }
      // Sum equal to number of boxes then print count-1 else print count-2 
        if(sum==n)
            cout<<i-1<<endl;
        else
            cout<<i-2<<endl;
        
    }
    return 0;
}
