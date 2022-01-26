#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    unsigned long long int n,u,upward=1,downward=0;
    cin>>n;
    if(n==0)
        cout<<1; // as initially only one vertex pointing up
    else
    {
    while(n--)
    {
        u=upward; 
        upward=(upward*3+downward)%1000000007; // count for upward 
        downward=(downward*3+u)%1000000007;  // count for downward
    }
        cout<<(upward);
    }
    return 0;
}
