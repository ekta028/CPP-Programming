//Write a program which accept one number from user and print that number of even numbers on screen

//Input : 7     Output : 2 4 6 8 10 12 14

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
    void PrintEven()
    {
        for(iCnt = 1 ; iCnt <= iNo*2 ; iCnt++)
        {
            if(iCnt % 2 == 0)
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
    obj.PrintEven();

    return 0;
}