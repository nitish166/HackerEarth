#include<bits/stdc++.h>
using namespace std;


int MissingNumber(int* arr, int n)
{
	int res = arr[0];
	for(int i=1;i<=n;i++)
	{
		res ^=arr[i];
	}
    
    int res1 =1;

	for(int i=2;i<=(n+1);i++)
	{
		res1 ^=i;
	}
	//cout<<res<<" "<<res1;
    int ans = res^res1;

    return ans; 

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

	int ans1 = MissingNumber(arr, n);
	cout<<ans1<<endl;
	return 0;
}