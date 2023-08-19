#include<iostream>
using namespace std;

void print_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort01(int arr[],int size)
{
    int left=0;
    int right=size-1;
   
   while(left<right)
   {
        if(arr[left]==0 && left<right)
        {
            left++;
        }
        else if(arr[right]==1 && left<right)
        {
            right--;
        }
        else
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
   }
}

int main()
{
    int a[8]={1,1,0,1,0,0,0,1};
    sort01(a,8);
    print_array(a,8);
    return 0;
}