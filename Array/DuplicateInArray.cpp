int Solution::repeatedNumber(const vector<int> &A) {
   
   int temp=0;
   for(int i=0;i<A.size();i++)
   {
       temp ^=i;
       temp ^=A[i];
   }
   return temp;
}
