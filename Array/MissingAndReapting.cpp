#include<bits/stdc++.h>
using namespace std;
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
   long long int len = A.size();
   long long int sum = (len*(len+1))/2;
   long long int sum_of_squre = (len*(len+1)*(2*len+1))/6;
   
   long long int missing=0, reapiting=0;
   for(int i=0;i<A.size();i++)
   {
       sum -=(long long int)A[i];
       sum_of_squre -= (long long int)A[i]*(long long int)A[i];
   }
   

   missing = (sum + sum_of_squre/sum)/2;
   reapiting = missing -sum;
   vector<int> B;
   B.push_back(reapiting);
   B.push_back(missing);
   return B;
   
}
