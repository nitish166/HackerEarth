#include<bits/stdc++.h>
using namespace std;


void printPath(int** output, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<output[i][j]<<" ";
		}
		
	}
	cout<<endl;
	return;
}

void PossiblePath(int** maze, int** output, int n, int x, int y)
{
	if(x==n-1 && y==n-1)
	{
		output[x][y]=1;
		printPath(output,n);
		output[x][y]=0;
		return;
	}

	if(x>=n || x<0 || y>=n || y<0 || maze[x][y]==0 || output[x][y]==1){
		return;
	}

	output[x][y]=1;
	PossiblePath(maze, output, n, x-1, y);
	PossiblePath(maze, output, n, x+1, y);
	PossiblePath(maze, output, n, x, y-1);
	PossiblePath(maze, output, n, x, y+1);
	output[x][y]=0;
	return ;
}

void RatInMaze(int** maze, int n)
{
	int** output = new int*[n];
	for(int i=0;i<n;i++)
	{
		output[i] = new int[n];
	}

	PossiblePath(maze,output,n,0,0);

}

int main()
{
	int n;
	cin>>n;
	int** maze = new int*[n];
	for(int i=0;i<n;i++)
	{
		maze[i] = new int[n];
		for(int j=0;j<n;j++)
		{
			cin>>maze[i][j];
		}
	}
	RatInMaze(maze, n);
	return 0;
}