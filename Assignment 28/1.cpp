//Write a program which accept one number from user and off 7th bit of that number if it is on.

//Input : 79		//Output : 15


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
	    unsigned int iMask = 0x00000040;
	    unsigned int iResult = 0;
    
	    iMask = ~iMask;
	
	    iResult = iNo & iMask;
	
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