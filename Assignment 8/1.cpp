//Write a program which accept number from user and print that number of $ and * on screen

//Input : 5     //Output : $ * $ * $ * $ * $ *


#include<iostream>
using namespace std;

class Code
{
    public :
        int iCnt , iNo;

    Code()
    {
        iNo = 0;
    }
    Code(int iValue)
    {
        iNo = iValue;
    }
    void Pattern()
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            cout<<"$"<<"\t"<<"*"<<"\t";
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    Code obj(iValue);
    obj.Pattern();

    return 0;
}