#include<bits/stdc++.h>
using namespace std;

int sum(int* arr, int n)
{
	if(n<=0)
	{
		return 0;
	}
	return (sum(arr, n-1) + arr[n-1]);
}

int main()
{
	int n;
	cin>>n;
	int* arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans = sum(arr, n);
	cout<<ans<<endl;
	return 0;
}