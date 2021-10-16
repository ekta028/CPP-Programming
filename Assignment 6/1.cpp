//Write a program which accept number from user and display its digits in reverse order

//Input : 2395      //Output : 5 9 3 2


#include<iostream>
using namespace std;

class Code
{
    public :
        int iNo , iRem;

    Code()
    {
        iNo = 0;
        iRem = 0;
    }
    Code(int iValue)
    {
        iNo = iValue;
    }
    void DisplayDigit()
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo > 0)
        {
            iRem = iNo % 10;
            cout<<iRem<<"\t";
            iNo = iNo / 10;
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    Code obj(iValue);
    obj.DisplayDigit();

    return 0;
}