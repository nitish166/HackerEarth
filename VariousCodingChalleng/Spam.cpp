#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;


void Spam(int* input, int n, int* output)
{
	output[0]=1;
	for(int i=1;i<n;i++)
	{
		output[i]=1;

		for(int j=i-1; (j>=0)&&(input[i]>=input[j]); j--)
		{
			output[i]++;
		}

	}

	for(int i=0;i<n;i++)
	{
		cout<<output[i]<<" ";
	}


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

   int* output = new int[n];
   Spam(input, n, output);

   return 0;
}