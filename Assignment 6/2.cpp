//Write a program which accept number from user and check whether it contains 0 in it or not

//Input : 2395      //Output : There is no zero
//Input : 1908      //Output : It contains zero


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
    bool CheckZero()
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo > 0)
        {
            iRem = iNo % 10;
            if(iRem == 0)
            {
                iCnt++;
                break;
            }
            iNo = iNo / 10;
        }
        if(iCnt == 1)
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

    bRet = obj.CheckZero();
    if(bRet == true)
    {
        cout<<"It contains zero"<<"\n";
    }
    else
    {
        cout<<"There is no zero"<<"\n";
    }

    return 0;
}