/*
2. Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)
Input : 5.3 9.78
Output : 51.834
*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float fArea = 1.0;
    fArea = fWidth *fHeight;

    return fArea;
}

int main()
{
     float fValue1 = 0.0, fValue2 = 0.0;
     double dRet = 0.0;
     
     printf("Enter width\t");
     scanf("%f",&fValue1);

     printf("Enter height\t");
     scanf("%f",&fValue2);

     dRet = RectArea(fValue1, fValue2);

     printf("Area of rectangl is:\t%f",dRet);
 
  return 0;
}