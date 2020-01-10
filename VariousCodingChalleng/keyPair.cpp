#include <bits/stdc++.h>
using namespace std;

bool keyPair(int arr[], int x, int n)
{
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]+arr[j]==x)
				{
					return true;
				}
			}
			
		}
		return false;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		bool temp=keyPair(arr, x, n);
		if(temp==true)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"False"<<endl;
		}

	}
	return 0;
}