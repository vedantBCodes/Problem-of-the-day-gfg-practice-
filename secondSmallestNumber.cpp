/*The task is to find the second smallest number with a given sum of digits as sum
and the number of digits as cnt.*/
#include<iostream>
using namespace std;
int main()
{
    int sum,cnt,cnt2=0,sum2,x,i,j,num1,num2;
    cout<<"How much should be the sum:";
    cin>>sum;
    cout<<"How many digits should be there in the number:";
    cin>>cnt;
   switch(cnt)
   {
   case 2:
       num1=10;
       num2=99;
       break;
   case 3:
       num1=100;
       num2=999;
       break;
   case 4:
       num1=1000;
       num2=9999;
       break;
   }
    for(i=num1;i<=num2;i++)
    {
        sum2=0;
        j=i;
        while(j>0)
        {
        x=j%10;
        sum2=sum2+x;
        j=j/10;
        }
        if(sum2==sum)
        {
            cnt2++;
            if(cnt2==2)
            {
            cout<<"second smallest number with sum "<<sum<<" is:"<<i;
            }
        }
    }
}
