#include<bits/stdc++.h>
using namespace std;

// Using iterative implementation
int BinarySearchIterative(int* arr, int l, int r, int num)
{
	while(r>=l)
	{
		int mid = l+(r-l)/2;

		if(arr[mid]==num)
			return mid;

		if(arr[mid]>num)
			l = mid+1;
		if(arr[mid]<num)
			r = mid-1;

	}
	return -1;
}

// Using Recursion
int BinarySearch(int* arr, int l, int r, int num)
{
	
	if(r>=l)
	{
		int mid = l+(r-l)/2;
	

	if(arr[mid]==num)
	{
		return mid;
	}

	if(num>arr[mid]){
       return BinarySearch(arr, mid+1, r, num);
	}
	if(num<arr[mid]){
       return BinarySearch(arr, l, mid-1, num);
	}
}
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

	int ans = BinarySearch(arr, 0,n-1, x);
	int ans2 = BinarySearchIterative(arr, 0, n-1, x);
	cout<<ans2<<endl;
	cout<<ans<<endl;
	return 0;
}