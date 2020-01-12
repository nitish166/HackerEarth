#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;


int maximum(int arr[], int n)
{
	sort(arr, arr+n);
	map<int, int> freq;

	int temp=arr[0];
	for(int i=1;i<n;i++)
	{
		freq[arr[i]]++;
	}

	int curr_max=0;

	map<int,int>:: iterator itr;

    // calculate maximum frequency
	for(itr =freq.begin(); itr!=freq.end(); itr++)
	{
		if(itr->second>curr_max)
		{
			curr_max=itr->second;
		}
	}
	return curr_max;
}
 
int main()
{
 
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
   		cin>>arr[i];
   }

   int ans = maximum(arr,n);
   cout<<ans<<endl;
   return 0;
}