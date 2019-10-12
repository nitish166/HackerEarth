#include<bits/stdc++.h>
#define LIMIT 1000
using namespace std;



void PrintMultipleOfN(int n)
{
   if(n<=0)
   {
   	return;
   }
   if(n>LIMIT)
   {
   	return;
   }
   cout<<n<<" ";
   PrintMultipleOfN(2*n);
   cout<<n<<" ";
}
int main()
{
	int n;
	cin>>n;
	PrintMultipleOfN(n);
	return 0;
}