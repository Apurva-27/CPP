/*
1.Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3
Output : 88.2026
Input : 10.4
Output : 339.6224
*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    float fArea = 1.0;
    float PI = 3.14;

    
    (fArea = PI * fRadius * fRadius);

    return fArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
 
    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
 
    printf("Area of Circle is:\t%f",dRet);
 
    return 0;
}