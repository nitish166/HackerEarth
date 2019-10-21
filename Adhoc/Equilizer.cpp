#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   int n;
   cin>>n;
   string s,t;
   cin>>s>>t;
   int cost=0;
   for(int i=0;i<n;)
   {
   		if(s[i] !=t[i]){
   			//Either swap or increment the cost
   			if(i+1<n && s[i] !=s[i+1] && s[i+1] != t[i+1]){
   				i+=2;
   			}else{
   				i++;
   			}
   			cost++;
   		}else{
   			i++;
   		}

   }
   cout<< cost <<endl;
   return 0;
}