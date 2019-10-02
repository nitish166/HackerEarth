#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n, k;
		cin>>n>>k;
		int* arr = new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int min = arr[0];
		for(int i=1; i<n;i++)
		{
			if(min>arr[i])
			{
				min=arr[i];
			}
		}
		int sum=0;
		if(min<=k)
		{
			sum = k-min;
		}else
		{
			sum = 0;
		}
		cout<<min<<endl;

	}
	return 0;
}