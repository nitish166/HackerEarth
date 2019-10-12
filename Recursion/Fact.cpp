// Conversion of non-tail recursion function to tail recursion function

#include<bits/stdc++.h>
using namespace std;

unsigned int factTR(unsigned int n, unsigned int a)
{
	if(n==0)
	{
		return a;
	}
	return factTR(n-1, n*a);
}

unsigned int fact(unsigned int n)
{
	return factTR(n,1);
}

int main()
{
	unsigned int n;
	cin>>n;
	cout<<fact(n);
	return 0;
}