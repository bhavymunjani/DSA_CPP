int getPivot(vector<int>& arr,int size)
{
    int start=0;
    int end=size-1;
    int mid;

    while(start<end)
    {
        mid=start+(end-start)/2;

        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }

    return start;
}

int binarySearch(vector<int>& arr,int s,int e,int k)
{
    int start=s;
    int end=e;
    int mid;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(k<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}


int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot=getPivot(arr,n);

    if(arr[pivot]<=k && k<=arr[n-1])
    {
        return binarySearch(arr,pivot,n,k);
    }
    else
    {
        return binarySearch(arr,0,pivot-1,k);
    }
}