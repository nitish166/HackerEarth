#include<bits/stdc++.h>
using namespace std;

int MinAbsolute(int* arr, int n)
{
	sort(arr, arr+n);
	int min=INT_MAX;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1]-arr[i]<min)
		{
			min=arr[i+1]-arr[i];
		}
	}
	return min;
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

	int ans =MinAbsolute(arr, n);
	cout<<ans<<endl;
	return 0;
}