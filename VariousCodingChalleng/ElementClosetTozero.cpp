#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;

bool compare(int x, int y)
{
	return abs(x)<abs(y);
}


void FindMinSum(int arr[], int n)
{
	sort(arr, arr+n, compare);

	int min = INT_MAX, x, y;

	for(int i=1; i<n;i++)
	{
		if(abs(arr[i-1]+ arr[i])<=min)
		{
			min = abs(arr[i-1]+arr[i]);

			x=i-1;
			y=i;
		}
	}


	cout<<"The two element whose sum is minimum are "<<arr[x]<<" and "<<arr[y]<<endl;
}
 
int main()
{
 
   int t;
   cin>>t;
   while(t--)
   {
   		int n;
   		cin>>n;
   		int arr[n];
   		for(int i=0;i<n;i++)
   		{
   			cin>>arr[i];
   		}

   		FindMinSum(arr, n);

   }
   return 0;
}