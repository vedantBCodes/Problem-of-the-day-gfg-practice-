/*
Given a list of N fractions, represented as two lists numerator and denominator,
the task is to determine the count of pairs of fractions whose sum equals 1.

Example 1:
Input:
N = 4
numerator = [1, 2, 2, 8]
denominator = [2, 4, 6, 12]
Output:
2
Explanation:
Fractions 1/2 and 2/4 sum to 1. Similarly fractions 2/6 and 8/12 sum to 1.
So there are 2 pairs of fractions which sum to 1.

Example 2:
Input:
N = 5
numerator = [3, 1, 12, 81, 2]
denominator = [9, 10, 18, 90, 5]
Output:
2
Explanation:
Fractions 3/9 and 12/18 sum to 1. Similarly fractions 1/10 and 81/90 sum to 1. 
So there are 2 pairs of fractions which sum to 1.
*/

#include<iostream>
using namespace std;
 
int fractionWithSum1(int n,int arr1[],int arr2[])
{
    int cnt=0;
   for(int i=0;i<n;i++)
   {
    float temp1=float(arr1[i])/float(arr2[i]);
    for(int j=i+1;j<n;j++)
    {
        float temp2=float(arr1[j])/float(arr2[j]);
        if((temp1+temp2)==1)
        {
            cnt++;
        }
    }
   }
   return cnt;
}

int main()
{
    int n=5;
    int numerator[]={3, 1, 12, 81, 2};
    int denominator[]={9, 10, 18, 90, 5};
    int cnt=fractionWithSum1(n,numerator,denominator);
    cout<<"Total fraction pairs with sum equals to 1 is:"<<cnt;
   return 0;
}