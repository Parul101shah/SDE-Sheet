#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
   //Optimized Approach
   long long  mxtillhere=0;
   long long  mx=0;
   for(int i=0;i<n;i++)
   {
       mxtillhere+=arr[i];
       mx=max(mx,mxtillhere);
       if(mxtillhere <0)
       {
           mxtillhere=0;
       }
   }
   return mx;
}
