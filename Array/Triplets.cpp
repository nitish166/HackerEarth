#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	ll* arr = new ll[n];
	ll ones, twos, threes, others;
	ones = twos = threes = others = 0;
	
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
		if (arr[i] == 1)ones++;
		else if (arr[i] == 2)twos++;
		else if (arr[i] == 3)threes++;
		else others++;
	}
	
	ll ans = 0;
	//case: 1 1 1
	ans = ((ones * (ones - 1) * (ones - 2)) / 2);
	//case: 1 1 2
	ans += ((ones*(ones - 1)))*(twos);
	//case: 1 1 x
	ans += ((ones*(ones - 1))/2)*(others+threes);
	//case: 1 2 2
	ans += ((twos*(twos - 1))/2)*(ones);
	//case: 1 2 3
	ans += (ones*twos*threes);
	cout << ans << endl;
	return 0;
}