#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int  n,m,sum=0,i,j,k,temp;
    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++) // taking input 
        cin>>a[i];
  //Now Sorting the input in accending order 
     for(i=0;i<n;i++)
     {
          for(j=k=i; j<n ;j++)
         {
               if(a[j]<a[k])
               {
                   k=j;
               }
         }
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
     }
  // condition if he can't buy any toffee 
    if(a[0]>m)
        cout<<0;
  // conditon to buy maximum number of toffee 
    else
    {
        i=0;
        while(sum<=m && i<=n)
        {
            sum=sum+a[i];
            i++;
        }
        cout<<i-1;
    }
    return 0;
}
