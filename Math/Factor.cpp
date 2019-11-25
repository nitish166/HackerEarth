#include<bits/stdc++.h>
vector<int> Solution::allFactors(int A) {
    
    vector<int> ans;
    ans.push_back(1);
    ans.push_back(A);
    for(int i=1;i*i<=A;i++)
    {
        if(A%i==0)
        {
            ans.push_back(i);
        }
        if(A/i !=i)
        {
            int a = A/i;
            ans.push_back(a);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
