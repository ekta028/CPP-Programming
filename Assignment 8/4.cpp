//Write a program which accept number from user and print all odd numbers till that numbers 

//Input : 18    //Output : 1 3 5 7 9 11 13 15 17 


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
            if(iCnt % 2 != 0)
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
    obj.Display();

    return 0;
}