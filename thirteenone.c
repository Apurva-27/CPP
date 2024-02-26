/*
1. Accept number from user and display below pattern.
Input : 5
Output : A B C D E
*/

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    char cVal ='\0';

    for(iCnt = 1 ;iCnt <= iNo ;iCnt++)
    {
        if(cVal < 90)
        cVal =  iCnt + 65;
        printf("%c\t",cVal);
    }

}

int main()
{
 int iValue = 0;

 printf("Enter number of elements\t");
 scanf("%d",&iValue);

 Pattern(iValue);

 return 0;
}
