#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    //Greedy Approach
    // SC=O(n)
    /*vector<vector<int>>ans;
    int n=intervals.size();
    stack<pair<int,int>>st;
    sort(intervals.begin(),intervals.end());
    int s0=intervals[0][0],s1=intervals[0][1];
    st.push({s0,s1});
    for(int i=1;i<n;i++)
    {
        int st1=st.top().first;
        int st2=st.top().second;
        int i1=intervals[i][0];
        int i2=intervals[i][1];
        if(st2>=i1)
        {
            st2=max(st2,i2);
            st.pop();
            st.push({st1,st2});
        }
        else
        {
            st.push({i1,i2});
        }
    }
    while(!st.empty())
    {
        ans.push_back({st.top().first,st.top().second});
        st.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;*/
    // _______________________________________________________________
    // SC:O(1)
    vector<vector<int>>ans;
    int n=intervals.size();
    int idx=0;
    sort(intervals.begin(),intervals.end());
    for(int i=1;i<n;i++)
    {
        int idx1=intervals[idx][0];
        int idx2=intervals[idx][1];
        int i1=intervals[i][0];
        int i2=intervals[i][1];
        if(idx2 >=i1)
        {
            intervals[idx][1]=max(idx2,i2);
        }
        else
        {
            idx++;
            intervals[idx][0]=i1;
            intervals[idx][1]=i2;
        }
    }
    for(int i=0;i<=idx;i++)
    {
        ans.push_back({intervals[i][0],intervals[i][1]});
    }
    return ans;
}
