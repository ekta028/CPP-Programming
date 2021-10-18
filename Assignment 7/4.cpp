//Write a program which accept number from user and return multiplication of all digits

//Input : 2395     //Output : 270


#include<iostream>
using namespace std;

class Code
{
    public :
        int iNo , iRem , iMult;

    Code()
    {
        iNo = 0;
        iRem = 0;
        iMult = 0;
    }
    Code(int iValue)
    {
        iNo = iValue;
    }
    int MultDigit()
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        iMult = 1;
        while(iNo > 0)
        {
            iRem = iNo % 10;
            iMult = iMult * iRem;
            iNo = iNo / 10;
        }
        return iMult;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    Code obj(iValue);

    iRet = obj.MultDigit();
    cout<<"Multiplication is :"<<iRet<<"\n";

    return 0;
}