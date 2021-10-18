//Write a program which accept number from user and return count of even digit

//Input : 23896      //Output : 3


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
    int CountEven()
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo > 0)
        {
            iRem = iNo % 10;
            if(iRem % 2 == 0)
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

    iRet = obj.CountEven();
    cout<<"frequency of even number is :"<<iRet<<"\n";

    return 0;
}