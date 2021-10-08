//Accept one number from user and print that number of * on screen.

//Input : 5		Output : * * * * *


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
    void Display()
    {
        while(iCnt < iNo)
        {
            cout<<"*"<<"\t";
            iCnt++;
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    Code obj(iValue);
    obj.Display();

    return 0;
}