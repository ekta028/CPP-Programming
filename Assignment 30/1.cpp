//Write a program which accept one number from user and count number of on bits in it without using % operator.

//Input : 11		Output : 3


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
	int CountBit()
	{
		unsigned int iMask = 0x00000001;
		unsigned int iResult = 0;
		int iCnt = 0, i = 0;
	
		for(i = 0 ; i < 32 ; i++)
		{
			iResult = iNo & iMask;
	
			if(iResult == iMask)
			{
				iCnt++;
			}
			iMask = iMask << 1;
		}
		return iCnt;
	}
};

int main()
{
	unsigned int iValue = 0;
	int iRet = 0;
	
	cout<<"Enter number : ";
	cin>>iValue;

	Code obj(iValue);
	
	iRet = obj.CountBit();
	cout<<"Total on bits are : "<<iRet<<"\n";
	
	return 0;
}