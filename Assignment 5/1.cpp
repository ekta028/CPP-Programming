//Write a program which accept number from user and display its multiplication of factotrs

//Input : 12        Output : 144(1 * 2 * 3 * 4 * 6)


#include<iostream>
using namespace std;

class Code 
{
    public :
        int iNo , iCnt , iMult;

    Code()
    {
        iNo = 0;
        iCnt = 0;
        iMult = 0;
    }
    Code(int iValue)
    {
        iNo = iValue;
    }
    int MultFact()
    {
        iMult = 1;

        for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iMult = iMult * iCnt;
            }
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

    iRet = obj.MultFact();
    cout<<iRet<<"\n";

    return 0;
}