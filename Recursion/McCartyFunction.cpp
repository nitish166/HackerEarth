#include<bits/stdc++.h>
using namespace std;

int McCarty(int n)
{
	if(n>100)
	{
		return n-10;
	}
	return McCarty(McCarty(n+11));
}

int main()
{
	int n;
	cin>>n;
	int num = McCarty(n);
	cout<<num<<endl;
	return 0;
}