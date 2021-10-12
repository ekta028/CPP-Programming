//Write a program which accept number from user and return summation of all its non factors

//Input : 12        Output : 50(5 7 8 9 10 11)


#include<iostream>
using namespace std;

class Code
{
    public :
        int iNo , iCnt , iSum;

    Code()
    {
        iNo = 0;
        iCnt = 0;
        iSum = 0;
    }
    Code(int iValue)
    {
        iNo = iValue;
    }
    int FactRev()
    {
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iNo % iCnt != 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
};

int main()
{
    int iValue = 0 , iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    Code obj(iValue);

    iRet = obj.FactRev();
    cout<<"Sum is : "<<iRet;

    return 0;
}