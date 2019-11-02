#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;


int strXOR(string* str, int n)
{
	string res;
	int max_size = INT_MIN;

	for(int i=0;i<n;i++)
	{
		max_size = max(max_size, (int)str[i].size());
	}

	for(int i=0;i<max_size;i++)
	{
		int curr_bit =0;
		for(int j=0;j<n;j++)
		{
			curr_bit = curr_bit ^ (str[j][i] - '0');
		}
		res +=(curr_bit + '0');
	}
	int count=0;
	for(int i=0;i<max_size;i++)
	{
		if(res[i]=='1')
			count++;
	}
	
	return count;
}


 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
  
   int t;
   cin>>t;
   while(t--)
   {
   		int n;
   		cin>>n;
   		string* s1 = new string[n];
   		for(int i=0;i<n;i++)
   		{
   			
   			cin>>s1[i];
   		}
   		int res = strXOR(s1, n);

   		cout<<res<<endl;
   }
    
   
        
        
 
   return 0;
}