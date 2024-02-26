/*
4. Write a program to find odd factorial of given number.
Input : 5
Output : 15 (5 * 3 * 1)
Input : -5
Output : 15 (5 * 3 * 1)
Input : 10
Output : 945 (9 * 7 * 5 * 3 * 1)
*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iDec=1, iFact=1;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iDec=1; iDec<=iNo; iDec++)
    {
        if((iDec%2)!=0)
        {
            iFact = iFact * iDec;
        }
    }
    return iFact;
}

int main()
{
 int iValue = 0,iRet = 0;

 printf("Enter number\t");
 scanf("%d",&iValue);

 iRet = OddFactorial(iValue);

 printf("Odd Factorial of number is \t%d",iRet);

 return 0;
} 