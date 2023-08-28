#include<iostream>
using namespace std;

int getPivot(int arr,int size)
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

int main()
{
    int arr[5]={5,9,1,2,3};
    cout<<"pivot element is at index="<<getPivot(arr,5)<<endl;
    return 0;
}