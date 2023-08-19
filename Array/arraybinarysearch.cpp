#include<iostream>
using namespace std;
int BSA(int array[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e)
        {
            int mid=(s+e)/2;
            if(array[mid]==key)
                {
                    return mid;
                }
            elseif(array[mid]<key)
                {
                    s=mid+1;
                }
            else
                {
                    e=mid-1;
                }
    
        }

}
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int array[n];
    int i;
    for(i=0;i<n;i++)
        {
            cin<<array[i];
        }
    int key;
    cout<<"enter your key";
    cin>>key;
    cout<<BSA(array,n,key)<<endl;
}