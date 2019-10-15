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
   // sort(arr, arr+n);
    int sum=0;
	for(int i=0;i<n-2;i++)
	{
		int l,r,k;
		l=i+1;
		k=l+1;
		r=n-1;

		while(l<r)
		{
			sum +=floor((arr[i]+arr[l]+arr[k])/(arr[i]*arr[l]*arr[k]));
			l++;
			r--;
		}

	}
	cout<<sum<<endl;
	return 0;



}