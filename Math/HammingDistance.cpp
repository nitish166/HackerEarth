#include<bits/stdc++.h>
#define mod 1000000007

int Solution::hammingDistance(const vector<int> &A) {
    
    
    if(A.size()==0)
    {
        return 0;
    }
    int ans=0;
    for(int i=0;i<32;i++)
    {
        int count=0;
        for(int j=0;j<A.size();j++)
        {
            if(A[j]&(1<<i))
            {
                count++;
            }
        }
        ans =(ans + count*(A.size()-count)*2)%mod;
        if(ans>=mod)
        {
            ans = ans-mod;
        }
    }
    
    return ans;
}
