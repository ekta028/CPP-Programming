//Accept number from user and display below pattern

//Input : 8     Output : 2 4 6 8 10 12 14 16

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
    void Pattern()
    {
        for(iCnt = 1 ; iCnt <= iNo * 2 ; iCnt++)
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

    cout<<"Enter number of elemnts : ";
    cin>>iValue;

    Code obj(iValue);
    obj.Pattern();

    return 0;
}