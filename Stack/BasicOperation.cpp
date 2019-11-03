#include<bits/stdc++.h>
#include<stack>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   stack<char> s1;
   int i=0;
   char element='a';
   if(s1.empty()==true)
   {
   		cout<<"Stack is empty as expected"<<endl;
   }
   else
   {
   		cout<<"Stack is not empty"<<endl;
   }
   for(i=0;i<=2;i++)
   {
	   	s1.push(element);
	   	element++;
   }
   
   cout<<"Size of stack  :"<<s1.size()<<endl;
   while(s1.empty()!=true)
   {
   		cout<<"Top element :"<<s1.top()<<endl;
   		s1.pop();
   		cout<<"Element popped"<<endl;

   }

   if(s1.empty()==true)
   {
   		cout<<"Stack is empty"<<endl;
   }
   else
   {
   		cout<<"Stack is not empty"<<endl;
   }    
 
   return 0;
}