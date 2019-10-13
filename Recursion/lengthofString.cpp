#include<bits/stdc++.h>
using namespace std;

int LengthFun(char s[])
{
	if(s[0] =='\0')
	{
		return 0;
	}

	int smallStringlength = LengthFun(s+1);
	return 1+smallStringlength;

}


int main()
{
	char str[100];
    cin>>str;
	int len = LengthFun(str);
	cout<<len<<endl;
	return 0;
}