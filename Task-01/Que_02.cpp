#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int p,q,r,s;
    cin>>p>>q>>r>>s; // Taking input 
  /* If starting time of first machine is less then the starting time of second then make the starting time of First machine equal to Second and vise verse .*/ 
    if(p<r)
        p=r;
    else
        r=p;
  /* If Ending time of first machine is less then the Ending time of second then make the Ending time of Second machine equal to First and vise verse .*/ 
    if(q<s)
        s=q;
    else
        q=s;
  /* As starting and ending time of both the machine are same so common in then can be easily calucated by subtracting the starting time from ending . */
    if((q-p)>0)
        cout<<q-p;
    else
        cout<<0;
    
        
    return 0;
}
