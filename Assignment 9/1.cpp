//Write a program which accept range from user and display all numbers in between that range

//Input : 23       35       //Output : 23 24 25 26 27 28 29 30 31 32 33 34 35 


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
    void RangeDisplay()
    {
        if(iStart > iEnd)
        {
            cout<<"Invalid Range"<<"\n";
        }
        
        for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
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
    obj.RangeDisplay();

    return 0;
}