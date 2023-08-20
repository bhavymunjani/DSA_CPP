#include<iostream>
using namespace std;

void swap_alt(int a[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(a[i],a[i+1]);
        }
    }
}

void print_array(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr1[5]={10,20,30,40,50};
    int arr2[6]={10,20,30,40,50,60};

    swap_alt(arr1,5);
    swap_alt(arr2,6);    

    print_array(arr1,5);
    print_array(arr2,6);
    return 0;
}