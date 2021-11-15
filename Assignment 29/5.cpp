//Write a program which accept one number and position from user and toggle contents of first and last nibble of the number. Return modified number.

//Input : 4026531855		Output : 0


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
	int ToggleBit()
	{
		unsigned int iMask = 0xF000000F;
		unsigned int iResult = 0;
		
		iResult = iNo ^ iMask;
	
		return iResult;
	}
};

int main()
{
	unsigned int iValue = 0;
	unsigned int iRet = 0;
	
	cout<<"Enter number : ";
	cin>>iValue;

	Code obj(iValue);

	iRet = obj.ToggleBit();
	cout<<"Updated number is : "<<iRet<<"\n";
	
	return 0;
}