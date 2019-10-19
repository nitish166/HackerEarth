#include<bits/stdc++.h>
using namespace std;


int FlipIthBit(int n, int i)
{
	int z = n ^(1<<i);
	return z;
}

int main()
{
	int n,i;
	cin>>n>>i;
	int ans = FlipIthBit(n,i);
	cout<<ans<<endl;
	return 0;
}