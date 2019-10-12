#include<bits/stdc++.h>
using namespace std;

int count(int n)
{
	if(n==0)
	{
		return 0;
	}

	int smallAns = count(n/10);
	int ans = smallAns+1;
	return ans;
}

int main()
{
	int n;
	cin>>n;
	int ans = count(n);
	cout<<ans<<endl;
	return 0;
}