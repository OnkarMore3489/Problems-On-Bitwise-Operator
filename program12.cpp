#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT ToggleBit(UINT iNo,int iPos1,int iPos2)
{
    UINT iMask1=0x00000001,iMask2=0x00000001,iResult=0,iMask=0;
    if((iPos1<1) || (iPos1>32) || (iPos2<1) || (iPos2>32))
    {
        return 0;
    }

    iMask1=iMask1<<(iPos1-1);
    iMask2=iMask2<<(iPos2-1);
    iMask=iMask1|iMask2;

    iResult=iNo^iMask;
    return iResult;
}
int main()
{
    UINT iValue=0,iRet=0,i=0,j=0;

    cout<<"Enter the Number : "<<"\n";
    cin>>iValue;
    
    cout<<"Enter the First position : "<<"\n";
    cin>>i;

    cout<<"Enter the Second position : "<<"\n";
    cin>>j;

    iRet=ToggleBit(iValue,i,j);
    cout<<"Updated Number is : "<<iRet<<"\n";

    return 0;
}