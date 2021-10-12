//Write a program which accept number from user and display all its non factotrs

//Input : 12        Output : 5 7 8 9 10 11


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
    void NonFact()
    {
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iNo % iCnt != 0)
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
    obj.NonFact();

    return 0;
}