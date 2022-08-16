#include<stdio.h>
void DisplayBinary(int iNo)
{
    int idigit=0;
    while(iNo!=0)
    {
       idigit=iNo%2;
       printf("%d ",idigit);
       iNo=iNo/2;
    }
}
int main()
{
    int iValue=0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    DisplayBinary(iValue);
}