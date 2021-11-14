//Write a program which checks whether 5th and 18th bit is on or off.

//Input : 131088		//Output : Bit is On
//Input : 131072		//Output : Bit is Off


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
	    unsigned int iMask = 0x00020010;
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
		cout<<"Bit is on\n";
	}
	else
	{
		cout<<"Bit is Off\n";
	}
	return 0;
}