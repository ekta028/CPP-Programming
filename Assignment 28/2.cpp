//Write a program which accept number from user and off 7th and 10th bit of that number.Return modified number.

//Input : 577		//Output : 1

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
	    unsigned int iMask = 0x00000240;
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
	
	cout<<"Enter Number : ";
    cin>>iValue;

    Code obj(iValue);
	
	iRet = obj.OffBit();
	cout<<"Updated number is : "<<iRet<<"\n";
	
	return 0;
}