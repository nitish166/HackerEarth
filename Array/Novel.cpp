#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;




bool CheckNovel(int* arr, int n)
{
	
	sort(arr, arr+n);
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1])
			return 1;
		if(arr[i]==n-i-1)
		{
			return 1;
		}
	}
	if(arr[n-1]==0)
		return 1;
	return -1;
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

   bool result = CheckNovel(arr, 9);
   if(result==true)
   {
   	 cout<<"Yes"<<endl;
   }else
   {
   	cout<<"No"<<endl;
   }
   return 0;
}