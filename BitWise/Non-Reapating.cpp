#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	
	int n;
	cin>>n;
	int size = 2*n+2;
	int* arr = new int[size];
	for(int i=0;i<size; i++ )
	{
		cin>>arr[i];
	}

	sort(arr, arr+size);

    
    map<int, int> m;
    for(int i=0;i<size;i++)
    {
    	m[arr[i]]++;
    }

    map<int, int> :: iterator it;

    for(it = m.begin(); it !=m.end(); it++)
    {
    	if(it->second==1)
    		cout<<it->first<<" ";
    }
    }

	return 0;
}