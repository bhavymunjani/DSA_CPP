#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &stalls,int k,int mid)
{
    int cowCount=1;
    int lastPoss=stalls[0];

    for(int i=0;i<stalls.size();i++)
    {
        if(stalls[i]-lastPoss>=mid)
        {
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPoss=stalls[i];
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());

    int start=0;
    int maxi=-1;

    for(int i=0;i<stalls.size();i++)
    {
        maxi=max(maxi,stalls[i]);
    }

    int end=maxi;
    int mid;
    int ans=-1;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(isPossible(stalls,k,mid))
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }

    return ans;
}