#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int ll;
 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   int t;
   cin>>t;
   while(t--)
   {
   		ll n,m,q;
   		cin>>n>>m>>q;
   		ll r[n+1];
   		ll c[m+1];
   		memset(r,0,sizeof(r));
   		memset(c,0,sizeof(c));
   		ll x,y;
   		for(ll i=0;i<q;i++)
   		{
   			cin>>x>>y;
   			r[x]++;
   			c[y]++;
   		}
   		ll odd=0, even=0, r_zero=0;

   		// for row calculation
   		for(ll i=1;i<=n;i++)
   		{
   			if(r[i]>0)
   			{
   				if(r[i]%2 !=0)
   					odd++;
   				else
   					even++;

   			}else{
   				r_zero++;
   			}
   		}
        // for column operation
        ll count=0;
        for(ll i=1;i<=m;i++)
        {
        	if(c[i]>0)
        	{
        		if(c[i]%2 !=0)
        			count +=even+r_zero;
        		else
        			count +=odd;

        	}
        	else{
        		count +=odd;
        	}
        }
        cout<<count<<endl;
   }
   return 0;
}