#include<bits/stdc++.h>
using namespace std;


struct Activity{
	int start, finish;
};


bool compare(Activity s1, Activity s2)
{
	return (s1.finish < s2.finish);
}

int CountMaximumActivity(Activity* arr, int n)
{
	int i=0;
	int count=1;
	sort(arr, arr+n, compare);
	for(int j=1;j<n;j++)
	{
		if(arr[j].start>=arr[i].finish)
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
	
	Activity* arr = new Activity[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].start;
		cin>>arr[i].finish;
	}

	int ans = CountMaximumActivity(arr, n);
	cout<<ans<<endl;
	return 0; 
}