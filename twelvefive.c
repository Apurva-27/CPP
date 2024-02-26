/*
5. Write a program which returns difference between Even factorial and odd factorial
of given number.
Input : 5
Output : -7 (8 - 15)
Input : -5
Output : -7 (8 - 15)
Input : 10
Output : 2895 (3840 - 945)
*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iFact=1, iCnt=0, iEveFact=1 ,iOddFact=1 ,iDiffEveOdd=0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iCnt % 2)==0)
        {
            iEveFact = iEveFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    iDiffEveOdd = iEveFact - iOddFact;
   return iDiffEveOdd ;        
}

int main()
{
 int iValue = 0,iRet = 0;
 
 printf("Enter number\t");
 scanf("%d",&iValue);
 
 iRet = FactorialDiff(iValue);
 
 printf("Factorial difference is \t%d",iRet);
 
 return 0;
}