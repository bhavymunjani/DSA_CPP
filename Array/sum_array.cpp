#include<iostream>
using namespace std;

int sum_array(int a[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans+a[i];
    }

    return ans;
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
    int a[6]={10,20,30,40,50,60};
    print_array(a,6);
    cout<<"sum of the array is="<<sum_array(a,6)<<endl;
    return 0;
}