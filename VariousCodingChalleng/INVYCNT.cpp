#include<bits/stdc++.h>
#include<string>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   int t;
   cin>>t;
   while(t--)
   {
   	 	int n,k;
   	 	cin>>n>>k;
   	 	int* arr = new int[n];
   	 	for(int i=0;i<n;i++)
   	 	{
   	 		cin>>arr[i];
   	 	}

   	 	int cnt1, cnt2;
   	 	int ans=0;
   	 	for(int i=0;i<n;i++)
   	 	{
   	 		cnt1=0;
   	 		cnt2=0;
   	 		for(int j=i+1;j<n;j++)
   	 		{
   	 			if(arr[j]<arr[i])
   	 				cnt1++;
   	 		}

   	 		for(int j=0;j<i;j++)
   	 		{
   	 			if(arr[j]<arr[i])
   	 				cnt2++;
   	 		}
   	 		ans += (k*(2*cnt1 + (k-1)*(cnt2+cnt1)))/2;

   	 	}
   	 	cout<< ans << "\n";
   	 	
   }
   return 0;
}