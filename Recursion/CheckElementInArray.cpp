#include<bits/stdc++.h>
using namespace std;


bool checkElement(int* arr, int n, int x)
{
	int l,r;
	l=0;
	r=n-1;
	if(l>r)
	{
		return false;
	}
	if(arr[l]==x)
		return true;
	if(arr[r]==x)
		return true;
	bool ans = checkElement(arr+1, n-1, x);
	if(ans==true)
		return true;
	return false;

}


int main()
{
	int n,x;
	cin>>n>>x;
	int* arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    
    bool ans = checkElement(arr, n, x);
    if(ans == true)
    {
    	cout<<"True"<<endl;
    }
    else
    {
    	cout<<"False"<<endl;
    }
    return 0;
}