//Write a program which accept number from user and count frequency of 2 in it

//Input : 232534      //Output : 2


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
    int CountTwo()
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo > 0)
        {
            iRem = iNo % 10;
            if(iRem == 2)
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

    iRet = obj.CountTwo();
    cout<<"frequency of 2 is :"<<iRet<<"\n";

    return 0;
}