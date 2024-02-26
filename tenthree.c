/*
3. Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
Input : 5
Output : 5000
Input : 12
Output : 12000
*/

#include<stdio.h>
int KMtoMeter(int iNo)
{
    int iMeter =1;

    iMeter = iNo*1000;

    return iMeter;
}

int main()
{
 int iValue = 0, iRet = 0;

 printf("Enter distance\t");
 scanf("%d",&iValue);

 iRet = KMtoMeter(iValue);
 
 printf("Distance in meter is:\t%d",iRet);
 
 return 0; 

}