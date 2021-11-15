//Write a program which accept number and position from user and check whether bit at that position is on or off.If bit is on return TRUE otherwise FALSE.

//Input : 10		iPos : 2		Output : Bit is On
//Input : 10		iPos : 1		Output : Bit is Off


#include<iostream>
using namespace std;

class Code
{
	public :
		int iNo , iPos;

	Code()
	{
		iNo = 0;
		iPos = 0;
	}
	Code(int iValue , int iPos)
	{
		iNo = iValue;
		this->iPos = iPos;
	}
	bool CheckBit()
	{
		unsigned int iMask = 0x00000001;
		unsigned int iResult = 0;
	
		if((iPos < 1) || (iPos > 32))
		{
			return false;
		}
		iMask = iMask << (iPos - 1);
	
		iResult = iNo & iMask;
	
		if(iResult == iMask)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	unsigned int iValue = 0 , iPos = 0;
	bool bRet = false;
	
	cout<<"Enter number : ";
	cin>>iValue;

	cout<<"Enter position : ";
	cin>>iPos;
	
	Code obj(iValue,iPos);

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