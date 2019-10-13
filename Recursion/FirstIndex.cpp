#include<bits/stdc++.h>
using namespace std;

int firstIndex(int* arr, int n, int x)
{
	int l,r;
	l=0;
	r=n-1;
	if(l>r)
		return -1;
	if(arr[l]==x)
		return 0;
	int ans = firstIndex(arr+1, n-1, x);
	if(ans !=-1)
		return ans+1;
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
	int ans = firstIndex(arr, n, x);
	cout<<ans<<endl;
	return 0;
}