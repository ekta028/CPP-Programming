//Program to Divide two numbers


#include<iostream>
using namespace std;

class Code
{
    public :
        int iNo1,iNo2,Ans;

    Code()
    {
        iNo1 = 0;
        iNo2 = 0;
        Ans = 0;
    }
    Code(int iValue1,int iValue2)
    {
        iNo1 = iValue1;
        iNo2 = iValue2;
    }
    int Divide()
    {
        Ans = iNo1 / iNo2;
        return Ans;
    }
};

int main()
{
    int iValue1 = 15 , iValue2 = 5;
    int iRet = 0;
    Code obj(iValue1,iValue2);

    iRet = obj.Divide();
    cout<<iRet<<"\n";

    return 0;
}
