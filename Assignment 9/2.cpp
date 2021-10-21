//Write a program which accept range from user and display all even numbers in between that range

//Input : 23       35       //Output : 24 26 28 30 32 34  


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
    void RangeDisplayEven()
    {
        if(iStart > iEnd)
        {
            cout<<"Invalid Range"<<"\n";
        }
        
        for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
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
    int iStart = 0 , iEnd = 0;

    cout<<"Enter starting number : ";
    cin>>iStart;

    cout<<"Enter ending number : ";
    cin>>iEnd;

    Code obj(iStart,iEnd);
    obj.RangeDisplayEven();

    return 0;
}