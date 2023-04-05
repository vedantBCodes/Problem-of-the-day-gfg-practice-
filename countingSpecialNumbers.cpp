// A number is said to be a special number if it is divisible by at least 1 other element of the array.
#include<iostream>
using namespace std;
countSpecialNumbers(int arr[],int sizeA)
{
    int i,cnt=0;
    for(i=0;i<sizeA;i++)
    {
        for(int j=0;j<sizeA;j++)
        {
            if(j!=i)
        {
            if(arr[i]%arr[j]==0)
            {
                cnt++;
                break;
            }
        }
        }
    }
    cout<<"Total number of special numbers are:"<<cnt;
}
int main()
{
    int arr[50];
    int x;
    cout<<"Enter the size of array:";
    cin>>x;
    cout<<"Enter any "<<x<<" array elements:";
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    countSpecialNumbers(arr,x);
}
