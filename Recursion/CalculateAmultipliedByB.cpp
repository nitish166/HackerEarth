#include<bits/stdc++.h>
using namespace std;

int Calculate(int a, int b)
{
	if(b==0)
	{
		return 0;
	}
	if(b%2 == 0)
		return Calculate(a+a, b/2);
	return Calculate(a+a, b/2) + a;
	
		
}
int main()
{
	int a,b;
	cin>>a>>b;
	int multi = Calculate(a,b);
	cout<<multi<<endl;
	return 0;
}