//Write a program which accept number from user and print numbers till that numbers 

//Input : 8    //Output : 1 2 3 4 5 6 7 8


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
    void Display()
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            cout<<iCnt<<"\t";
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    Code obj(iValue);
    obj.Display();

    return 0;
}