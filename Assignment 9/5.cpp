//Write a program which accept range from user and display all numbers in between that range in reverse order

//Input : 23       35       //Output : 35 34 33 32 31 30 29 28 27 26 25 24 23


#include<iostream>
using namespace std;

class Code
{
    public :
        int iStart , iEnd , iCnt;

    Code()
    {
        iStart = 0;
        iEnd = 0;
        iCnt = 0;
    }
    Code(int iStart,int iEnd)
    {
        this->iStart = iStart;
        this->iEnd = iEnd;
    }
    void RangeDisplayRev()
    {
        if(iStart > iEnd)
        {
            cout<<"Invalid Range"<<"\n";
        }
        
        for(iCnt = iEnd ; iCnt >= iStart ; iCnt--)
        {
            cout<<iCnt<<"\t";
        }
    }
};

int main()
{
    int iStart = 0 , iEnd = 0;

    cout<<"Enter starting number : ";
    cin>>iStart;

    cout<<"Enter ending number : ";
    cin>>iEnd;

    Code obj(iStart,iEnd);
    obj.RangeDisplayRev();

    return 0;
}