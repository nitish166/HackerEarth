int Solution::isPower(int A) {
    
    // trivail case
    if(A==1)
        return true;
    
    for(int i=2; i<=sqrt(A);i++)
    {
        unsigned y=2;
        unsigned p =pow(i,y);
        while(p<=A && p>0)
        {
            if(p==A)
                return true;
            y++;
            p=pow(i,y);
        }
    }
    return false;
}
