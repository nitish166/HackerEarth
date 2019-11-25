#include<bits/stdc++.h>
vector<int> Solution::sieve(int A) {
    
    
    bool mark[A]; 
    memset(mark, true, sizeof(mark)); 
   
   
    for (int p=2; p*p<A; p++) 
    { 
       
        if (mark[p] == true) 
        { 
           
            for (int i=p*2; i<A; i+=p) 
                mark[i] = false; 
        } 
    } 
    vector<int> B;
    
    for (int p=2; p<A; p++) 
        if (mark[p] == true) 
            B.push_back(p);
            
    sort(B.begin(), B.end());
    return B;
    
}
