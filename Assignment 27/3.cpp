//Write program which checks whether 7th , 15th , 21st and 27th bit is on or off.

//Input : 68173888		//Output : Bit is On
//Input : 1065024		//Output : Bit is Off


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
    bool CheckBit(int iNo)
    {
	    unsigned int iMask = 0x04104040;
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
	bRet = obj.CheckBit(iValue);
	
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