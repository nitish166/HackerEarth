#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    int res=0;
	    for(int i=0;i<n;i++)
	    {
	        int freq= (i+1)*(n-i);
	        
	        // check if freq is odd then include in the xor
	        
	        if(freq%2==1)
	        {
	            res = res^arr[i];
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}