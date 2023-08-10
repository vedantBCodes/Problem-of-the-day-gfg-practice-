/*
Given two strings, find the length of longest subsequence present in both of them.
Both the strings are in uppercase latin alphabets.

Example 1:
Input:
A = 6, B = 6
str1 = ABCDGH
str2 = AEDFHR
Output: 3
Explanation: LCS for input strings “ABCDGH” and “AEDFHR” is “ADH” of length 3.

Example 2:
A = 3, B = 2
str1 = ABC
str2 = AC
Output: 2
Explanation: LCS of "ABC" and "AC" is "AC" of length 2.
*/

#include<iostream>
using namespace std;

int longestCommonSubsequence(char str1[],char str2[],int m,int n)
{
   int x=0;
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        if(str1[i]==str2[j])
        {
            x++;
            for(int k=j;k<n;k++)
            {
                str2[k]=str2[k+1];
            }
            n--;
            break;
        }
    }
   }
   return x;
}

int main()
{
    char str1[]="AABBC";
    int str1Length=5;
    char str2[]="ABCBC";
    int str2Length=5;
    int len=longestCommonSubsequence(str1,str2,str1Length,str2Length);
    cout<<"The length of the longest common subsequence is "<<len;
    
}