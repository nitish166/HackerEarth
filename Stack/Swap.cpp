#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   stack<int> s1, s2;
   for(int i=0;i<=2;i++)
   {
   		s1.push(i);
   }

   for(int i=0;i<=5;i++)
   {
   		s2.push(i);
   }

   cout<<"Size of Stack Before Swap :"<<s1.size()<<"\t"<<s2.size()<<endl;
   swap(s1,s2);
   cout<<"Size of Stack After Swap :"<<s1.size()<<"\t"<<s2.size()<<endl;
   return 0;
}