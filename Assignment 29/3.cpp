//Write a program which accept one number and position from user and on bit of that position. Return modified number.

//Input : 10		iPos : 3		Output : 14


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
		Pos = iPos;
	}
	int OnBit()
	{
		int iMask = 0x00000001;
		int iResult = 0;
	
		if((iPos < 1) || (iPos > 32))
		{
	
		}
		iMask = iMask << (iPos - 1);
	
		iResult = iNo | iMask;
	
		return iResult;
	}
};

int main()
{
	int iValue = 0 , iPos = 0;
	unsigned int iRet = 0;
	
	cout<<"Enter number : ";
	cin>>iValue;
	
	cout<<"Enter position : ";
	cin>>iPos;
	
	Code obj(iValue,iPos);

	iRet = obj.OnBit();
	cout<<"Updated number is : "<<iRet<<"\n";
	
	return 0;
}