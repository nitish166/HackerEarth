#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 

bool CompString(string s, string p)
{
	int n = s.length();
	int m = p.length();
	
	for(int i=0;i<=(n-m);i++)
	{
		bool isFound=true;
		for(int j=0;j<m;j++)
		{
			if(s[i+j] !=p[j])
			{
				isFound=false;
				break;
			}
		}
		if(isFound==true)
		{
			return true;
		}
	}
	return false;
}





int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   string s;
   string p;
   cin>>s>>p;
   cout<<CompString(s,p)<<endl; 
   return 0;
}