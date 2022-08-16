#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool ChkBit(UINT iNo)
{
    UINT iMask=0x00100000,iResult=0;
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
        printf("21th bit is ON");
    }
    else
    {
         printf("21th bit is OFF");
    }
    return 0;
}