#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &boards,int k,int mid)
{
    int painterCount=1;
    int workSum=0;

    for(int i=0;i<boards.size();i++)
    {
        if(workSum+boards[i]<=mid)
        {
            workSum+=boards[i];
        }
        else
        {
            painterCount++;
            if(painterCount>k || boards[i]>mid)
            {
                return false;
            }
            workSum=boards[i];
        }
    }

    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.

   

    int start=0;
    int sum=0;

    for(int i=0;i<boards.size();i++)
    {
        sum+=boards[i];
    }
    int end=sum;
    int ans=-1;
    int mid;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(isPossible(boards,k,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}