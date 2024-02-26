/*
5. Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20
*/

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iTable=1 ,iCnt=0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=5; iCnt++)
    {
        iTable = iNo* iCnt;
        printf("%d\t",iTable);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number\t");
    scanf("%d",&iValue);
 
    MultipleDisplay(iValue);

    return 0;
}