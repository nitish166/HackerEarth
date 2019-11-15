#include<bits/stdc++.h>
#include<math.h>

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    
    // Get current x and y
    int curX = A[0];
    int curY = B[0];
    
    int count =0;
    
    for(int i=0;i<A.size();i++)
    {
        // Get destination x and y
        int desX = A[i];
        int desY = B[i];
        
        // compute number of move required to reach destination
        count += max(abs(desX-curX), abs(desY-curY));
        
        curX = desX;
        curY = desY;
    }
    return count;
}
