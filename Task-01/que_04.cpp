#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Function to check a number is prime or not if prime return 1 else return 0 
int isPrime(int temp)
{
    for(int i=2 ;i<=sqrt(temp); i++)
    {
        if(temp%i==0)
            return 0;
    }
    return 1;
}
int main() 
{
    int n,x,i,j=0,count=0;
    cin>>n>>x; // taking input 
    int a[n];
  // storing all the prime number between [2 , n] in array . 
    for(i=2;i<n;i++)
    {
        if(isPrime(i))
            a[j++]=i;
    }
  
    for(i=0;i<j;i++)
    {
        int sum=0;
        sum=a[i]+a[i+1]+1; // Now Checking if the sum of two consecutive prime number +1  is also prime or not and less then n 
        if(sum<=n && isPrime(sum))
            count++;
    }
  // noe if count is greater than or equal to the required , then print 'YES' if not so then print 'NO'
    if(count>=x)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
