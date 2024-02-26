/*
4. Write a program which accept temperature in Fahrenheit and convert it into
celsius. (1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.2222 (10 - 32) * (5/9)
Input : 34
Output : 1.11111 (34 - 32) * (5/9)
*/

#include<stdio.h>

double FhtoCs(float fNew)
{
    float fCelsius = 1.0;
   
    fCelsius = (fNew-32)*5/9;
   
    return fCelsius;
}

int main()
{
 float fValue = 0.0;
 double dRet = 0.0;
 
 printf("Enter temperature in Fahrenheit\t");
 scanf("%f",&fValue);
 
 dRet = FhtoCs(fValue);
- 
 printf("Temperature in celsius is\t%f",dRet);
 
 return 0;
} 