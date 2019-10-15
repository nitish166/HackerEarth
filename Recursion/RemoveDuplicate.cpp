#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char input[])
{
   // Base case
   if(input[0] == '\0')
    {
        return;
    }
   	
   	removeConsecutiveDuplicates(input+1);

   if(input[0] !=input[1])
   {
     return;
   }else{
   	int i=1;
   	for(;input[i] !='\0';i++)
   	{
   		input[i-1] =input[i];
   	}
   	input[i-1]=input[i];
   }
}

int main()
{
	char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}