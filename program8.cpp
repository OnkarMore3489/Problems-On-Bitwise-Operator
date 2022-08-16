#include<iostream>
using namespace std;
typedef unsigned int UINT;

/*
   op1  op2  &   |   ^
   1    0    0   1   1
   0    1    0   1   1
   1    1    1   1   0
   0    0    0   0   0
*/

UINT ToggleBit(UINT iNo,int iPos)
{
    UINT iMask=0x00000001,iResult=0;
    if((iPos<1) || (iPos>32))
    {
        return 0;
    }

    iMask=iMask<<(iPos-1);
    iResult=iMask^iNo;
    return iResult;
}
int main()
{
    UINT iValue=0,iRet=0,i=0;

    cout<<"Enter the Number : "<<"\n";
    cin>>iValue;
    
    cout<<"Enter the position : "<<"\n";
    cin>>i;

    iRet=ToggleBit(iValue,i);
    cout<<"Updated Number is : "<<iRet<<"\n";

    return 0;
}