//Write a program which checks whether first and last bit is on or off.First means 1 and last means 32 bit.

//Input : 2147483648		Output : Bit is off


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
    bool CheckBit()
    {
	    unsigned int long iMask = 0x80000001;
	    unsigned int iResult = 0;
	
	    iResult = iNo & iMask;
	
	    if(iResult == iMask)
	    {
		    return 1;
	    }
	    else
	    {
		    return 0;
	    }
    }
};

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	cout<<"Enter number : ";
	cin>>iValue;
	
    Code obj(iValue);

	bRet = obj.CheckBit();
	if(bRet == true)
	{
		cout<<"Bit is On\n";
	}
	else
	{
		cout<<"Bit is Off\n";
	}
	return 0;
}