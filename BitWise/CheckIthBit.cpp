#include<bits/stdc++.h>
using namespace std;


int CheckIthBit(int n, int i)
{
	int z = n & (1<<i);
	return z;
}


int main()
{
	int n,i;
	cin>>n>>i;

	int ans = CheckIthBit(n,i);
	if(ans==0)
	{
		cout<<"Unset Bit"<<endl;
	}else
	{
		cout<<"Set Bit"<<endl;
	}
	return 0;

}