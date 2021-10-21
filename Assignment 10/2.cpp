//Accept number from user and display below pattern

//Input : 5     Output : 5 # 4 # 3 # 2 # 1 #


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
        for(iCnt = iNo ; iCnt >= 1; iCnt--)
        {
            cout<<iCnt<<"\t"<<"#"<<"\t";
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