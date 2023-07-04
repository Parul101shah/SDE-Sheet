#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //Optimized Approach
   //[DUTCH NATIONAL FLAG question]
   int i=0,j=0,h=n-1;
   while(i<=h)
   {
      if(arr[i]==0)
      {
         swap(arr[i],arr[j]);
         i++;j++;
      }
      else if(arr[i]==1)
      {
         swap(arr[i],arr[j]);
         i++;
      }
      else
      {
         swap(arr[i],arr[h]);
         h--;
      }
   }
   //TC : O(n)
   //SC : O(1)
}
