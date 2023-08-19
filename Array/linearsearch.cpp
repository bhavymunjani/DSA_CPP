#include<iostream>
using namespace std;

    int ls(int array[],int n,int key)
    {
        for(int i=0;i<n;i++)
        {
            if(array[i]==key)
            {
                return i;
            }
        }
        return -1;
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
        cin>>array[i];
    }
    int key;
    cout<<"enter your key";
    cin>>key;
    cout<<ls(array,n,key);
    }
