#include<iostream>
using namespace std;
#include "solution.h"


int longestBitonicSubarray(int *input, int n) {

    vector<int> dp1(n, 1);
    vector<int> dp2(n, 1);
    
    for(int i=1;i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(input[j]<input[i]&& dp1[j]+1>dp1[i])
            {
                dp1[i]=dp1[j]+1;
            }
        }
    }
    
    for(int i=n-2; i>=0;i--)
    {
        for(int j=n-1; j>i; j--)
        {
            if(input[j]<input[i] && dp2[j]+1>dp2[i])
            {
                dp2[i]=dp2[j]+1;
            }
        }
    }
    int max=-1;
    for(int i=0;i<n;i++)
    {
        if((dp1[i]+dp2[i]-1)>max)
        {
            max=dp1[i]+dp2[i]-1;
        }
    }
    return max;
     	
     	
 	}


int main() {
  int n, input[100000];
  cin>>n;
  for(int i=0; i<n; i++) {
    cin>>input[i];
  }
  cout<<longestBitonicSubarray(input, n);
  return 0;
}
