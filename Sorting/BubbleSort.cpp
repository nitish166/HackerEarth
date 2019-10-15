#include<bits/stdc++.h>
using namespace std;


void swap(int *xp, int *yp)
{
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}


void BubbleSort(int* arr, int n)
{
	bool swipped;
	for(int i=0;i<n-1;i++)
	{
		swipped = false;
		for(int j=0; j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				swipped = true;
			}
		}
		if(swipped==false)
		{
			break;
		}
	}
}


void PrintBubble(int* arr, int n)
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

	BubbleSort(arr,n);
	PrintBubble(arr,n);
	return 0;
}