#include<bits/stdc++.h>
using namespace  std;
int b[11][11];

bool isAttacking(int size,  int r, int c){
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(i==r || j==c || (i+j)==(r+c) || (i-j)==(r-c)){
				if(b[i][j]==1)
					return true;
			}
		}
	}
	return false;
}
bool N_Queen(int size, int N)
{
		if(N==0)
		{
			return true;
		}

		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				if(isAttacking(size, i, j))
				{
					continue;
				}
				b[i][j]=1;
				if(N_Queen(size, N-1))
				{
					return true;
				}
				b[i][j]=0;
			}
		}

	return false;
}
void display(int size){
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		    cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
}


int main()
{ 
	int N;
	scanf("%d", &N);
	int size=N;
	memset(b, 0, sizeof(int)*11*11);

	if(N_Queen(size,N)){
	//printf("YES\n");
	display(size);
	}
	else{
		printf("Not possible\n");
	}

	return 0;
}

