#include<bits/stdc++.h>
using namespace std;

int PrintStar(int n)
{
	if(n>1)
	{
		PrintStar(n-1);
	}
	for(int i=0;i<n;i++)
	{
		cout<<" * ";
	}
}
int main()
{
	int n;
	cin>>n;
	PrintStar(n);
	return 0;
}