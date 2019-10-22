#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
 
bool isPrime(int number)
{
   int root = sqrt(number) ;
   for(int i=2; i<=root; i++) 
   {
      if(number%i == 0)
          return false;
   } 
   return true;
}
 
 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
 
   LL t;
   cin>>t;
   while(t--)
   {
   		LL n;
   		cin>>n;
   		LL* arr = new LL[n];
   		for(LL i=0;i<n;i++)
   		{
   			cin>>arr[i];
   		}
   		LL count=0;
   		for(LL i=0;i<n;i++)
   		{
   			if(isPrime(arr[i])){
               count++;
            }
         }
         cout<<count<<endl;
   }
   return 0;
}