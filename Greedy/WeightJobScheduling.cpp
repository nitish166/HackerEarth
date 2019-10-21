#include<bits/stdc++.h>
using namespace std;

struct Job
{
	int start, finish, profit;
};

bool compare(Job a, Job b)
{
	return a.finish<b.finish;
}

int fMaxProfit(Job arr[], int n)
{
	sort(arr, arr+n, compare);
	int* dp= new int[n];
	dp[0] = arr[0].profit;

	for(int i=1;i<n;i++)
	{
		int including = arr[i].profit;
		int lNconflict =-1;

		for(int j=i-1;j>=0; j--){
			if(arr[j].finish <= arr[i].start)
			{
				lNconflict = j;
				break;
			}
		}
		if(lNconflict !=-1)
		{
			including +=dp[lNconflict];
		}
		dp[i] = max(including, dp[i-1]);
	}
	int ans = dp[n-1];
	delete [] dp;
	return ans;
}

int main()
{
	// Job arr[4] ={{2,5,50},{1,2,20},{6,9,70},{2,50,400}};
	// cout<<"Maximum Profit is :"<< fMaxProfit(arr, 4)<<endl;
	int n;
	cin>>n;
	Job* arr = new Job[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].start;
		cin>>arr[i].finish;
		cin>>arr[i].profit;
	}

	int ans = fMaxProfit(arr, n);
	cout<<ans<<endl;
	return 0;
}