#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
int lis(int* input, int n)
{
	int* output = new int[n];
	output[0]=1;

	for(int i=1;i<n;i++)
	{
		output[i]=1;
		for(int j=i-1; j>=0;j--)
		{
			
			if(input[j]>input[i])
			{
				continue;
			}
			int possibleAns = output[j]+1;
			if(possibleAns>output[i])
			{
				output[i]=possibleAns;
			}
		}
	}

	int best=0;
	for(int i=0;i<n;i++)
	{
		if(best<output[i])
		{
			best=output[i];
		}
	}

	delete [] output;
	return best;
}



int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   int n;
   cin>>n;
   int* input = new int[n];
   for(int i=0;i<n;i++)
   {
   		cin>>input[i];
   }

   int ans = lis(input, n);
   cout<<ans<<endl;
   //delete [] input;
  	return 0;
}