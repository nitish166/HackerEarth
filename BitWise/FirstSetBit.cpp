#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int z= ~n;
	z =z+1;
	int ans = n&z;
	cout<<ans<<endl;

	return 0;
}