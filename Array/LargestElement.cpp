#include <bits/stdc++.h>
#include <string>

int myCompare(string x, string y)
{
    string xy = x.append(y);
    string yx = y.append(x);
    
    return xy.compare(yx)>0? 1:0;
}

string Solution::largestNumber(const vector<int> &A) {
    
    vector<string> B;

    //convert int to string
    for(int i=0;i<A.size();i++)
    {
        B.push_back(to_string(A[i]));
    }

    // use compare function
    sort(B.begin(), B.end(), myCompare);

    // chacked base case 
    if(B[0]=="0")
        return "0";

    //add all string to one single string
    string temp="";
    for(int i=0;i<B.size();i++)
    {
        temp +=B[i];
    }
    return temp;
}
