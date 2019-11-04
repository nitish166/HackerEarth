#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;

bool checkPerfectSqure(int n)
{
	int sr = sqrt(n);
	return (sr-floor(sr)==0);
}


 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   int n;
   cin>>n;
   bool ans = checkPerfectSqure(n);
   if(ans==true)
   {
   		cout<<"Perfect Squre"<<endl;
   }
   else
   {
   		cout<<"Not Perfect Squre"<<endl;
   }
    
   
        
     
   return 0;
}