#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


int stair(int n, int* arr)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    
    
    if(arr[n]>0)
        return arr[n];
        
    int output = (stair(n-1, arr)%mod + stair(n-2, arr)%mod)%mod; 
    arr[n]=output;
    return output;
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int* arr = new int[100000];
        int result = stair(n, arr);
        cout<<result<<endl;  
        delete [] arr;
        
    }

    
    return 0;
}
