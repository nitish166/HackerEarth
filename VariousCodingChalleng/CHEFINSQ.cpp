#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;


LL gcd(LL a,LL b)
{
	if(b==0)
		return a;
	return gcd(b, a%b);
}


void nCr(int n, int r) 
{ 
    long long p = 1, k = 1; 
    
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
            // gcd of p, k 
            long long m = gcd(p, k); 
  
      
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
    } 
  
    else
        p = 1; 
    cout << p << endl; 
} 




int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   int t; cin>>t;
   while(t--)
   {
	   	vector<int>p;
	   	int n,k; cin>>n>>k;
	   	for(int i=0;i<n;i++)
	   	{
	   		int x;
	   		cin>>x;
	   		p.push_back(x);
	   	}
	   	sort(p.begin(), p.end());
	   	int index = p[k-1];
	   	int count=0;
	   	for(int i=0;i<n;i++)
	   	{
	   		if(p[i]==index)
	   			count++;

	   	}
	   	int ans=0;
	   	for(int i=0;i<k;i++)
	   	{
	   		if(p[i]==index)
	   			ans++;
	   	}
	   	nCr(count, ans);
   }     
 
   return 0;
}