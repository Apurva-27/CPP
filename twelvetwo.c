/*
2. Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
Input : 10
Output : 700
Input : 3
Output : 270
Input : 1200
Output : 84000
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iConversion=1;
    
    iConversion = iNo*70;

    return iConversion;
}

int main()
{
 int iValue = 0, iRet = 0;

 printf("Enter number of USD\t");
 scanf("%d",&iValue);

 iRet = DollarToINR(iValue);

 printf("Value in INR is %d:",iRet);

 return 0;
} 