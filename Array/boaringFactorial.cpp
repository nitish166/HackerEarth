#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;

int power(ll x, ll n, ll p)
{
	ll value=1;
	if(n==0)
		return 1;
	if(n%2 !=0)
	{
		 value= (x*power(x,n-1,p))%p;
	}
	else
	{
		 
		 value = power(x,n/2,p);
		 value=(value*value)%p;
	}
	return value;
}


int main()
{
	ll n,p;
	int t;
	cin>>t;
	while(t--)
	{
		ll temp, result=-1;
		cin>>n>>p;
		if(n>=p)
		{
			cout<<"0"<<endl;
			continue;
		}
		for(int i=n+1;i<p;i++)
		{
			temp=power(i,p-2,p);
			result=(result*temp)%p;
		}
		cout<<result+p<<endl;
	}
	
	
	
	return 0;
}