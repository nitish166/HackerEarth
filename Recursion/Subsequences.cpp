#include<bits/stdc++.h>
#include<string>
using namespace std;

int sub(string input, string output[])
{
	if(input.empty())
	{
		output[0] ="";
		return 1;
	}
    string newString = input.substr(1);
	int smallStringSize = sub(newString, output);
	for(int i=0;i<smallStringSize;i++)
	{
		output[i+smallStringSize] =  input[0] + output[i];
	}
	return 2*smallStringSize;
}


int main()
{
	string input;
	cin>>input;
	string* output = new string[1000];
	int count = sub(input, output);
	for(int i=0;i<count;i++)
	{
     	cout<<output[i]<<endl;
	}
	return 0;
}