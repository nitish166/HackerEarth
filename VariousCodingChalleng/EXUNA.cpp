#include<bits/stdc++.h>
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
   		int n;
   		cin>>n;
   		int* arr = new int[n];
   		for(int i=0;i<n;i++)
   		{
   			cin>>arr[i];
   		}
   		sort(arr, arr+n);
   		cout<<arr[0]<<endl;
   }
   
        
        
 
   return 0;
}