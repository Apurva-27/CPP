/*
4.Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864
*/

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo == 0)                //filter to handle 0 as input
    {
        return 0;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit==0)           // if (iDigit != 0) {iMult = iMult * iDigit;} ha ek way aahe zero handle cha
        {
           iDigit = 1; 
        }
        iMult = iMult *iDigit;
        iNo = iNo / 10; 
    }
    return iMult;
}

int main()
{
 int iValue = 0;
 int iRet = 0;
 
 printf("Enter number:\t");
 scanf("%d",&iValue);
 
 iRet = MultDigits(iValue);
 
 printf("Multiplication of digits :\t%d",iRet);

 return 0;
}