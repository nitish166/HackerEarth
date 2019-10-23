#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;

// here int* n is a number in form of array like n=1147


int num_codesR(int* n, int size)
{
	if(size==1)
		return 1;
	if(size==0)
		return 1;

	int output = num_codesR(n, size-1);
	if(output[size-2]*10 + output[size-1] <=26)
	{
		output +=num_codesR(n, size-2);	
	}
	return output;
	
}

int num_codesdp(int* n, int size, int* arr)
{
	if(size==1)
		return 1;
	if(size==0)
		return 1;
	if(arr[n]>0)
		return arr[n];
	int output = num_codesdp(n, size-1, arr);
	if(output[size-2]*10 + output[size-1] <=26)
	{
		output +=num_codesdp(n, size-2, arr);	
	}
	arr[n]=output;
	return output;
	
}

int num_codesit(int* input, int size)
{
	int* output = new int[n+1];
	output[0]=1;
	output[1]=1;

	for(int i=2;i<=size;i++)
	{
		output[i]=output[i-1];
		if(output[i-2]*10 + output[i]<=26)
		{
			output[i] +=output[i-2];	
		}
		
	}
	int ans = output[size];
	delete [] output;
	return ans;
}


int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   
   return 0;
}