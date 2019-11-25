#include<bits/stdc++.h>
#define ull unsigned long long int 

string Solution::findDigitsInBinary(int A) {
    
    ull B_Number = 0; 
    int cnt = 0; 
    while (A != 0) { 
        int rem = A % 2; 
        ull c = pow(10, cnt); 
        B_Number += rem * c; 
        A /= 2; 
  
        // Count used to store exponent value 
        cnt++; 
    } 
    string str="";
    str = to_string(B_Number);
  
    return str; 
   
}
