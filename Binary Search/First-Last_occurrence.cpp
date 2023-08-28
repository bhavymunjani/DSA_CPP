#include <iostream> 
#include<vector>
using namespace std;

int firstOcc(vector<int>& arr,int n,int k)
{
    int s=0;
    int e=n-1;
    int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        else if(k<arr[mid])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}

int lastOcc(vector<int>& arr,int n,int k)
{
    int s=0;
    int e=n-1;
    int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            s=mid+1;
        }
        else if(k<arr[mid])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    
    pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
    pair<int,int> p;
    {
        // Write your code here
        p.first=firstOcc(arr,n,k);
        p.second=lastOcc(arr,n,k);
    }
 return p;
}