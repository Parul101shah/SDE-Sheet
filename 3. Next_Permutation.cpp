#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &per, int n)
{
    //optimized Approach
    //arr : 2 1 5 4 3 0 0 
    // 1.Find the break point
    int i,j;
    for(i=n-2;i>=0;i--)
    {
        if(per[i]< per[i+1])
        {
            break;
        }
    }
    //(1) is the break point
    // If no break point
    if(i<0)
    {
        reverse(per.begin(),per.end());
        return per;
    }
    //Find element greater than (1) breakpoint
    for( j=n-1;j>=0;j--)
    {
        if(per[j]>=per[i])
        {
            break;
        }
    }
    //Swap the elements and reverse the array from breakpoint+1
    swap(per[i],per[j]);
    reverse(per.begin()+i+1,per.end());
    return per;
}
