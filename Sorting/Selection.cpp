#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;

}


void PrintArray(int* arr, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
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
    int min_index;
	
	for(int i=0;i<n-2;i++)
	{
		min_index=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_index]){
				min_index=j;
			}
		}
		swap(&arr[min_index], &arr[i]);
	}

	PrintArray(arr, n);
	return 0;
	
}