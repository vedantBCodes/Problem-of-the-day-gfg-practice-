/*
Given a number N. The task is to find the Nth catalan number.
The first few Catalan numbers for N = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …

Catalan numbers are defined as a mathematical sequence that consists of positive integers, which can be 
used to find the number of possibilities of various combinations. 

The nth term in the sequence denoted Cn, is found in the following formula: (2n)!/((n + 1)! * n!))               

The first few Catalan numbers for n = 0, 1, 2, 3, … are : 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …  
*/
#include<iostream>
using namespace std;
 
int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int catalanNumber(int n)
{
    int nthCatalanNumber=(factorial(2*n))/((factorial(n+1)) * factorial(n));
    return nthCatalanNumber;
}
int main()
{
    int num=catalanNumber(6);
    cout<<num;
   return 0;
}