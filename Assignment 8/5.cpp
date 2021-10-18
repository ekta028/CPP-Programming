//Write a program which accept number from user and print first 5 multiples of that number  

//Input : 4    //Output : 4 8 12 16 20


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