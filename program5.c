#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool ChkBit(UINT iNo)
{
    UINT iMask=0x00000840,iResult=0;
    iResult=iNo&iMask;
    if(iResult==iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT iValue=0;
    bool bRet=false;

    printf("Enter the Number : ");
    scanf("%d",&iValue);
    
    bRet=ChkBit(iValue);
    if(bRet==true)
    {
        printf("7th and 12th bit is ON");
    }
    else
    {
         printf("bit are OFF");
    }
    return 0;
}