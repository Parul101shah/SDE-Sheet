#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    //outer matrix is moved clockwise and each element is moved only once
    int rs=0,cs=0; //Row start    // Column start
    int prev,curr;  
    while(rs<n && cs<m)
    {
    if(rs==n-1 || cs==m-1)
    {
        break;
    }
    prev=mat[rs+1][cs];
    //row up
    for(int i=cs;i<m;i++)
    {
        curr=mat[rs][i];
        mat[rs][i]=prev;
        prev=curr;
    }
    rs++;
    //col right
    for(int i=rs;i<n;i++)
    {
        curr=mat[i][m-1];
        mat[i][m-1]=prev;
        prev=curr;
    }
    m--;
    //row down
    if(rs < n)
    {
        for(int i=m-1;i>=cs;i--)
        {
            curr=mat[n-1][i];
            mat[n-1][i]=prev;
            prev=curr;
        }
    }
    n--;
    //col left
    if(cs<m)
    {
      for (int i = n - 1; i >= rs; i--) {
        curr = mat[i][cs];
        mat[i][cs] = prev;
        prev = curr;
      }
    }
    cs++;
    }
}
