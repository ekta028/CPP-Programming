//Write a program which accept number from user and print its number line 

//Input : 4    //Output : -4 -3 -2 -1 0 1 2 3 4


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
        
        for(iCnt = -iNo ; iCnt <= iNo ; iCnt++)
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