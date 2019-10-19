#include<bits/stdc++.h>
using namespace std;

int SetIthBit(int n, int i)
{
	n &= ~ (1<<i);
	return n;
}


int main()
{
	int n,i;
	cin>>n>>i;
	int ans = SetIthBit(n, i);
	cout<<ans<<endl;
	return 0;
}