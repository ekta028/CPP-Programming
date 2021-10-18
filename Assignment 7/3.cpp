//Write a program which accept number from user and return count of digit in between 3 and 7

//Input : 23496      //Output : 2


#include<iostream>
using namespace std;

class Code
{
    public :
        int iNo , iRem , iCnt;

    Code()
    {
        iNo = 0;
        iRem = 0;
        iCnt = 0;
    }
    Code(int iValue)
    {
        iNo = iValue;
    }
    int CountOdd()
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo > 0)
        {
            iRem = iNo % 10;
            if(iRem > 3 && iRem < 7)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    Code obj(iValue);

    iRet = obj.CountOdd();
    cout<<"frequency is :"<<iRet<<"\n";

    return 0;
}