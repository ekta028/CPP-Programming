//Write a program which accept number from user and display its factotrs in decreasing order

//Input : 12        Output : 6 4 3 2 1


#include<iostream>
using namespace std;

class Code
{
    public :
        int iNo , iCnt;

    Code()
    {
        iNo = 0;
        iCnt = 0;
    }
    Code(int iValue)
    {
        iNo = iValue;
    }
    void FactRev()
    {
        for(iCnt = iNo/2 ; iCnt >= 1 ; iCnt--)
        {
            if(iNo % iCnt == 0)
            {
                cout<<iCnt<<"\t";
            }
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    Code obj(iValue);
    obj.FactRev();

    return 0;
}