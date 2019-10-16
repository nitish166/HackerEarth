#include<bits/stdc++.h>
using namespace std;


void swap(int *xp, int *yp)
{
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}

bool CheckSorted(int* arr, int n)
{
	if(n==0 || n==1)
		return true;
	if(arr[n-1]<arr[n-2])
		return false;
	return CheckSorted(arr, n-1);
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

	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1]==arr[i]-1){
			swap(&arr[i+1], &arr[i]);
		}
	}

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
  
    cout<<endl;

	bool ans = CheckSorted(arr, n);
	if(ans==true)
	{
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}