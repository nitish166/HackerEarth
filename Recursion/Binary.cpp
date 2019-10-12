#include<bits/stdc++.h>
using namespace std;

void BinaryForm(int n)
{
	if(n==0)
	{
		return;
	}
	BinaryForm(n/2);
	cout<<n%2<<"";
}

int main()
{
	int n;
	cin>>n;
	BinaryForm(n);
	return 0;
}