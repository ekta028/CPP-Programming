//Write a program which accept one number from user and checks whether 9th and 12th bit is on or off.

//Input : 257		Output : Bit is Off
//Input : 2304		Output : Bit is On


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
		unsigned int iMask = 0x00000900;
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