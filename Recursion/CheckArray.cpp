#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int* arr, int size)
{
	if(size==0)
	{
		return true;
	}
    
    if(size ==1)
    {
    	return true;
    }

    if(arr[0]>arr[1])
    {
    	return false;
    }

    bool smallSortedArray = is_sorted(arr+1, size-1);
    return smallSortedArray; 
}


int main()
{
	int n;
	cin>>n;
	int* arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	bool ans = is_sorted(arr, n);
	if(ans==true)
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
	// cout<<ans<<endl;
	return 0;
}