/*
3.Write a program to find factorial of given number.
Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : -5
Output : 120 (5 * 4 * 3 * 2 * 1)
Input : 4
Output : 24 (4 * 3 * 2 * 1)
*/

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1 , iDec = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iDec=1; iDec<=iNo; iDec++)
    {
        iFact = iFact * iDec;
    }
    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;
     
    printf("Enter number\t");
    scanf("%d",&iValue);
 
    iRet = Factorial(iValue);
 
    printf("Factorial of number is:\t %d",iRet);
 
    return 0;
}