//Write a program which displays ASCII table.Table contains symbol,Decimal,Hexadecimal and octal representation of every member from 0 to 255.

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
    void DisplayASCII()
    {
        int iCnt = 0;

        cout<<"Decimal"<<"\t"<<"Character"<<"\n";
        for(iCnt = 0 ; iCnt <= iNo ; iCnt++)
        {
            cout<<int(iCnt)<<"\t\t"<<char(iCnt)<<"\n";
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter upto which number to display ascii table : ";
    cin>>iValue;

    Code obj(iValue);
    obj.DisplayASCII();

    return 0;
}