#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int* arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	vector<int> v;
	vector<int>:: iterator it;
	
	for(int i=0;i<n;i++)
	{
		for(int j = i+1; j<n; j++)
		{
			if(!(arr[j]>arr[i]))
		{
			v.push_back(arr[i]);
		}

		}
		
	
	}

	for(it =v.begin(); it != v.end(); it++)
	{
		cout<<*it<<" ";
	}

	return 0;
}