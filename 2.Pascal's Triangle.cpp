#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>ans;
  for(int i=0;i<n;i++)
  {
    vector<long long int>a(i+1,1);
    //This will start from 1 (ye i=0 ,i=1 k liye false ho)
    for(int j=1;j<i;j++)
    {
      a[j]=ans[i-1][j]+ans[i-1][j-1];
    }
    ans.push_back(a);
  }
  return ans;
}
