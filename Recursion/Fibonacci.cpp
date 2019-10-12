#include<bits/stdc++.h>
using namespace std;

int Fib(int n, int *fp)
{
	int f,t;

	if(n<=1)
	{
		*fp = 1;
		return 1;
	}
	t = Fib(n-1, fp);
	f = t + *fp;
	*fp = t;
	return f;
}

int main()
{
	int x,n;
	cin>>x>>n;
	int num = Fib(n, &x);
	cout<<num<<endl;
	return 0;
}