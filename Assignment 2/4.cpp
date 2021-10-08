//Accept two numbers from user and display first number in second number of times

//Input : 12    5       //Output : 12 12 12 12 12


#include<iostream>
using namespace std;

class Code
{
    public :
        int iNo,iFreq,iCnt;

    Code()
    {
        iNo = 0;
        iFreq = 0;
        iCnt = 0;
    }
    Code(int iValue,int iCount)
    {
        iNo = iValue;
        iFreq = iCount;
    }
    void Display()
    {
        for(iCnt = 1 ; iCnt <= iFreq ; iCnt++)
        {
            cout<<iNo<<"\t";
        }
    }
};

int main()
{
    int iValue = 0 , iCount = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    cout<<"Enter frequency :";
    cin>>iCount;

    Code obj(iValue,iCount);
    obj.Display();

    return 0;
}