#include<bits/stdc++.h>
using namespace std;

int ClearAllBit(int n, int i)
{
	int m = (1<<i)-1;
	int ans = n&m;
	return ans;
}


int main()
{
	int n,i;
	cin>>n>>i;
	
	int ans = ClearAllBit(n,i);
	cout<<ans<<endl;
	return 0;
}