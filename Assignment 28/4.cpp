//Write a program which accept number from user and toggle 7th and 10th bit of that number.Return modified number.

//Input : 137		Output : 713

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
	    unsigned int iMask = 0x00000240;
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