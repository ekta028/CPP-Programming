//Write a program which accept one number from user and on its first 4 bits.Return modified number.

//Input : 73		Output : 79


#include<iostream>
using namespace std;

class Code
{
    public :
        int iNo;

    Code()
    {
        iNo = 0;
    }
    Code(int iValue)
    {
        iNo = iValue;
    }
    int OffBit()
    {
	    unsigned int iMask = 0x0000000F;
	    unsigned int iResult = 0;
	
	    iResult = iNo | iMask;
	
	    return iResult;
    }
};

int main()
{
	unsigned int iValue = 0 , iPos = 0;
	unsigned int iRet = 0;
	
	cout<<"Enter number : ";
    cin>>iValue;

    Code obj(iValue);
	
	iRet = obj.OffBit();
	cout<<"Updated number is : "<<iRet<<"\n";
	
	return 0;
}