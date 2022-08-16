#include<stdio.h>
int main()
{
    int iValue=0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
  
    printf("Decimal : %d\n",iValue);
    printf("Octal : %o\n",iValue);
    printf("Hexadecimal : %x\n",iValue);
}