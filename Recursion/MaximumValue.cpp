#include<bits/stdc++.h>
using namespace std;
int MaximumValue(int* arr, int n)
{
	int x;

	// Base case
	if(n==1)
		return arr[0];
	else
		x=MaximumValue(arr, n-1);
	if(x>arr[n-1])
		return x;
	else
		return arr[n-1];

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
	int max = MaximumValue(arr, n);
	cout<<max<<endl;
	return 0;
}