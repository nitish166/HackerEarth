#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int s;
	cin>>s;
	while(s--)
	{
		long n;
		int r;
		cin>>n>>r;
		int* arr = new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int count=1;
		int temp = arr[0];
		for(int i=1;i<n;i++)
		{
			if(arr[i]>temp)
			{
				count++;
				temp = arr[i];
			}
		}
		int sum =0;
		sum = count*r;
		cout<<sum<<"\n";
	}
	return 0;
}