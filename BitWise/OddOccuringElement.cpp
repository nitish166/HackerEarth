#include<bits/stdc++.h>
using namespace std;

int FindOddNumber(int* arr, int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		res ^=arr[i];
	}
	return res;
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
	int ans = FindOddNumber(arr, n);
	cout<<ans<<endl;
	return 0;
}