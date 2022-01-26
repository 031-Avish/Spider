#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,i;
    cin>>n;
    while(n--)
    {
        string correct,tocheck;
        cin>>correct;
        cin>>tocheck;  // Taking input 
      
        int sizeC=correct.length(),sizeT=tocheck.length(),j=0,count=0,flag=0;
      
      // checking if Both string are ending at same point or not 
        if(correct[sizeC-1]!=tocheck[sizeT-1])
            flag=1;
        else{
        for(i=0; i<sizeC;i++) 
        {
            int rep=1;
            while(correct[i]==correct[i+1] )  // If there are repeatation in first string then counting all of them 
            {
                rep++;
                i++;
            }    
            count=0;
            while(correct[i]==tocheck[j] )  // comparing both the string word by word 
            {
                count++;
                j++;
            }
          
          // if the count of character in second string is less then the first string then making flag 1  
            if(count<1 || rep>count )
            {
                flag=1;
                break;
            }
        }
        }
      
      // cheking if the second string contains extra letters compaired to first 
        if(correct[i]!=tocheck[j])
            flag=1;
      
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
