#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT CountBit(UINT iNo)
{
    int i=0,iCnt=0;
    UINT iMask=0x00000001;

    for(i=1;i<32;i++)
    {
        iNo&iMask;
        if((iNo&iMask)==iMask)
        {
            iCnt++;
        }
        iMask=iMask<<1;
    }
    return iCnt;
}
int main()
{
    UINT iValue=0,iRet=0;

    cout<<"Enter the Number : "<<"\n";
    cin>>iValue;
    
    iRet=CountBit(iValue);
    cout<<"Number of on bits are : "<<iRet<<"\n";

    return 0;
}