#include<bits/stdc++.h>
using namespace std;


int MaximumActivity(int* arr1, int* arr2, int n)
{
	int i=0;
	int count =1;

    sort(arr2, arr2+n);
	for(int j=1; j<n; j++)
	{
		if(arr1[j]>=arr2[i])
		{
			count++;
			i=j;
		}
	}
	return count;
}


int main()
{
	int n;
	cin>>n;
	int* arr1 = new int[n];
	int* arr2 = new int[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
		cin>>arr2[i];
	}
	

	int ans = MaximumActivity(arr1, arr2, n);
	cout<<ans<<endl;
	return 0; 
}