//Set matrix Zeroes
//TC=O(2(n*m))
//SC=O(1)

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &mat)
{
	int n=mat.size();
	int m=mat[0].size();
	int col=1;
	for(int i=0;i<n;i++)
	{
		if(mat[i][0]==0)
		{
			col=0;
		}
		for(int j=1;j<m;j++)
		{
			if(mat[i][j]==0)
			{
				mat[i][0]=mat[0][j]=0;
			}
		}
	}
	//Now making elements zero
	for(int i=n-1;i>=0;i--)
	{
		for(int j=m-1;j>=1;j--)
		{
			if(mat[i][0]==0 || mat[0][j]==0)
			{
				mat[i][j]=0;
			}
		}
		if(col==0)
		{
			mat[i][0]=0;
		}
	}
	return ;
}
