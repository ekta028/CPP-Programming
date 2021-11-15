//Write a program which accept one number and position from user and off bit of that position. Return modified number.

//Input : 10		iPos : 2		Output : 8


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
	Code(int iValue,int Pos)
	{
		iNo = iValue;
		iPos = Pos;
	}
	int OffBit()
	{
		unsigned int iMask = 0x00000001;
		unsigned int iResult = 0;
	
		if((iPos < 1) || (iPos > 32))
		{
		
		}
		iMask = iMask << (iPos - 1);
	
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
	
	cout<<"Enter Position : ";
	cin>>iPos;

	Code obj(iValue,iPos);

	iRet = obj.OffBit();
	cout<<"Updated Number is : "<<iRet<<"\n";
	
	return 0;
}