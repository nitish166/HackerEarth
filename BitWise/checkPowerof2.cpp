#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int z = n & (n-1);
	if(z==0)
	{
		cout<<"Power of 2"<<endl;
	}else
	{
		cout<<"Not Power of 2"<<endl;
	}
	return 0;
}