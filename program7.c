#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool ChkBit(UINT iNo,UINT iPos)
{
    UINT iMask=0x00000001,iResult=0;
    if(iPos<1 || iPos>32)
    {
        printf("Invalid Bit\n");
    }
    iMask=iMask<<(iPos-1);
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
    UINT iValue=0,iBit=0;
    bool bRet=false;

    printf("Enter the Number : ");
    scanf("%d",&iValue);
    
    printf("Enter the position : ");
    scanf("%d",&iBit);

    bRet=ChkBit(iValue,iBit);
    if(bRet==true)
    {
        printf("bit is ON");
    }
    else
    {
         printf("bit are OFF");
    }
    return 0;
}