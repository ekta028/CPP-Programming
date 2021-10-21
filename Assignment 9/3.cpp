//Write a program which accept range from user and return summation of all numbers in between that range

//Input : 23       30       //Output : 212


#include<iostream>
using namespace std;

class Code
{
    public :
        int iStart , iEnd , iCnt , iSum;

    Code()
    {
        iStart = 0;
        iEnd = 0;
        iCnt = 0;
        iSum = 0;
    }
    Code(int iStart,int iEnd)
    {
        this->iStart = iStart;
        this->iEnd = iEnd;
    }
    int RangeSum()
    {
        if(iStart > iEnd)
        {
            cout<<"Invalid Range"<<"\n";
        }
        
        for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        return iSum;
    }
};

int main()
{
    int iStart = 0 , iEnd = 0 , iRet = 0;

    cout<<"Enter starting number : ";
    cin>>iStart;

    cout<<"Enter ending number : ";
    cin>>iEnd;

    Code obj(iStart,iEnd);

    iRet = obj.RangeSum();
    cout<<"Sum is : "<<iRet<<"\n";

    return 0;
}