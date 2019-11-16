int Solution::maxSubArray(const vector<int> &A) {
    
    int max_so_far =A[0];
    int temp=A[0];
    if(A.size()==1)
    {
        return A[0];
    }
    for(int i=1;i<A.size();i++)
    {
        temp  =  max(A[i], temp+A[i]);
        max_so_far = max(temp, max_so_far); 
    }
    return max_so_far;
    
}
