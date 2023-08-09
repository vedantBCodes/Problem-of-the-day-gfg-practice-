/*
Given a number N, the task is to find the largest prime factor of that number.

Example 1:
Input:
N = 5
Output:
5
Explanation:
5 has 1 prime factor i.e 5 only.

Example 2:
Input:
N = 24
Output:
3
Explanation:
24 has 2 prime factors 2 and 3 in which 3 is greater.
*/

#include<iostream>
using namespace std;
 
bool isPrime(int num)
{
   bool check=true;
   for(int i=2;i<num;i++)
   {
    if(num%i==0)
    {
        check=false;
    }
   }
   return check;
}
int largestPrimeFactor(int num)
{
   int maxFactor;
   for(int i=num;i>=1;i--)
   {
    if(num%i==0)
    {
        bool check=isPrime(i);
        if(check==true)
        {
            maxFactor=i;
            break;
        }
    }
   }
   return maxFactor;
}

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int maxFactor=largestPrimeFactor(num);
    cout<<"Largest prime factor of "<<num<<" is:"<<maxFactor;
   return 0;
}