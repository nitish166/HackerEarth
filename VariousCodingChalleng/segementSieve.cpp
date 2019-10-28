#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;



bool checkPoint(int n)
{
	if(n<=1)
		return false;
	if(n==2)
		return true;
	if(n%2==0)
	{
		return false;
	}else{
		bool temp=true;
		LL divisior=3;
		LL upperlimit =sqrt(n)+1;
		while(divisior <=upperlimit)
		{
			if(n%divisior ==0)
			{
				return false;
			}
			divisior +=2;
		}
		return temp;
	}
}


 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   int t;
   cin>>t;
   while(t--)
   {
   		LL m,n;
   		cin>>m>>n;
   		for(LL i=m;i<=n;i++)
   		{
   			if(checkPoint(i))
   			{
   				cout<<i<<" ";
   			}
   		}
   		cout<<endl;
   }
   
        
        
 
   return 0;
}