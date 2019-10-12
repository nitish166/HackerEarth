#include<bits/stdc++.h>
using namespace std;

int lastIndex(int* arr, int n, int x)
{
	int l=0;
	int r=n-1;
	if(l>r)
		return -1;

	int ans = lastIndex(arr+1, n-1, x);
	if(ans !=-1)
		return ans+1;
	if(arr[0]==x)
		return 0;
	return -1;
}

int main()
{
	int n,x;
	cin>>n>>x;
	int* arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans = lastIndex(arr, n, x);
	cout<<ans<<endl;
	return 0;
}