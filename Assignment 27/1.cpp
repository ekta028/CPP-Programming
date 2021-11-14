//Write a program which checks whether 15 bit is on or off.

//Input : 16385		//Output : Bit is On
//Input : 8208		//Output : Bit is Off


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
	    unsigned int iMask = 0x00004000;
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
		cout<<"Bit is On"<<"\n";
	}
	else
	{
		cout<<"Bit is Off"<<"\n";
	}
	return 0;
}
	