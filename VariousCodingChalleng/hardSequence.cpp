#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;


int HardSequence(int n)
{
	   int* arr1 = new int[n];
   	   int* arr2 = new int[n];

	   arr1[1]=0;
	   arr1[2]=0;
	   arr2[0]=2;
	   int next=1;

	   for(int i=3;i<=n;i++)
	   {
	   		int hints = arr2[next];
	   		arr1[i] = next;
	   		arr2[next] =i;
	   		next =0;
	   		if(hints>0)
	   		{
	   			next = i-hints;
	   		}
	   }


	   for(int i=1;i<=n;i++)
	   {
	   		cout<<arr1[i]<<" ";
	   }

	   cout<<endl;

	   int temp = arr1[n];
	   cout<<"Temp :"<<temp<<endl;
	   int count=0;

		for(int i=1;i<=n;i++)
	    {
		   	if(arr1[i]==temp)
		   	{
		   		count++;
		   	}
	    } 
	    return count;
}

 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   


   int t;
   cin>>t;
   while(t--)
   {
   		int n;
   		cin>>n;
   		int ans = HardSequence(n);
   		cout<<ans<<endl;
   }
   return 0;
}