#include<bits/stdc++.h>
using namespace std;



bool isPossible(int** board, int n, int row, int col)
{
	// same column
    for(int i=row-1; i>=0;i--)
    {
    	if(board[i][col]==1)
    		return false;
    }

    // Upper left Diagonal
    for(int i=row-1, j=col-1; i>=0 && j>=0; i--,j--)
    {
    	if(board[i][j]==1)
    		return false;
    }

    // Upper right Diagonal
    for(int i=row-1, j=col+1; i>=0 && j<n; i--,j++)
    {
    	if(board[i][j]==1)
    		return false;
    }
    return true;
}


void nQueenhelper(int** board, int n, int row)
{
	if(row==n)
	{
       // we have reached some solution
	   // Print the board matrix
	   // Return
       for(int i=0;i<n;i++)
       {
   			for(int j=0;j<n;j++)
   			{
   				cout<<board[i][j]<<" ";
   			}
       }
       cout<<endl;
       return;
	}
	
	// place at all possible position and move to smaller problem

	for(int j=0;j<n;j++)
	{
		if(isPossible(board,n,row,j))
		{
			board[row][j]=1;
			nQueenhelper(board,n,row+1);
			board[row][j]=0;
		}
	}
	return;

}


void helper(int** board, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			board[i][j]=0;
		}

	}

	nQueenhelper(board,n,0);


}


int main()
{
	int n;
	cin>>n;
	int** board = new int*[n]();
	for(int i=0;i<n;i++)
	{
		board[i] = new int[n];
		for(int j=0;j<n;j++)
		{
			board[i][j]=0;
		}
	}

	helper(board, n);
	return 0;
}