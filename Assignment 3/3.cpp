//Write a program which accept number from user and print even fators of that number

//Input : 24        Output : 2 4 6 12


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
    void DisplayFactor()
    {
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iNo % iCnt == 0 && iCnt % 2 == 0)
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
    obj.DisplayFactor();

    return 0;
}