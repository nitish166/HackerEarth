#include<bits/stdc++.h>
using namespace std;

int fibR(int n)
{
	if(n==0 || n==1)
		return 1;
	int output = fibR(n-1) + fibR(n-2);
	return output;
}

int fibdp(int n, int* arr)
{
	if(n==0 || n==1)
		return 1;
	if(arr[n]>0)
		return arr[n];
	int output = fibdp(n-1, arr) + fibdp(n-2, arr);
	arr[n] = output;
	return output;
}

int fibi(int n)
{
	int* arr = new int[n+1];
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<=n;i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}
	int output = arr[n];
	delete [] arr;
	return output;
}

int main()
{
	int n;
	cin>>n;
	int* arr = new int[n+1];
	cout<<fibR(n)<<endl;
	cout<<fibdp(n,arr)<<endl;
	cout<<fibi(n)<<endl;
	return 0;
}