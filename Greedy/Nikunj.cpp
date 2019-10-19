#include<bits/stdc++.h>
using namespace std;

long int MinmumValue(long int* arr, int n)
{
	sort(arr, arr+n, greater<int>());
	long int sum=0;
	for(int i=0;i<n;i++)
	{
      	sum += arr[i]*pow(2,i);
	}
	return sum;
}


int main()
{
	int n;
	cin>>n;
	long int* arr = new long int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	long int ans = MinmumValue(arr, n);
	cout<<ans<<endl;
	return 0;
}