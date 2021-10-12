//Write a program which accept number from user and return difference between summation of all its factors and non factors

//Input : 12        Output : -34(16 - 50)


#include<iostream>
using namespace std;

class Code
{
    public :
        int iNo , iCnt , iFSum , iNSum;

    Code()
    {
        iNo = 0;
        iCnt = 0;
        iFSum = 0;
        iNSum = 0;
    }
    Code(int iValue)
    {
        iNo = iValue;
    }
    int FactRev()
    {
        for(iCnt = 1 ; iCnt < iNo ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iFSum = iFSum + iCnt;
            }
            else
            if(iNo % iCnt != 0)
            {
                iNSum = iNSum + iCnt;
            }
        }
        return iFSum - iNSum;
    }
};

int main()
{
    int iValue = 0 , iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    Code obj(iValue);

    iRet = obj.FactRev();
    cout<<"Sum is : "<<iRet<<"\n";

    return 0;
}