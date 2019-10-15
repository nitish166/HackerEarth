#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp =*xp;
	*xp=*yp;
	*yp=temp;
}

void BubbleSort(int* arr, int n)
{
	if(n==1)
		return;

    for(int i=0;i<n-1;i++)
    {
    	if(arr[i]>arr[i+1])
    	{
    		swap(&arr[i], &arr[i+1]); 
    	}
    }
	BubbleSort(arr, n-1);

}


void PrintBubbleSort(int* arr, int n)
{
	for(int i=0;i<n; i++)
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

	BubbleSort(arr, n);
	PrintBubbleSort(arr, n);
	return 0;
}