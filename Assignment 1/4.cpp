//Accept one number and check whether it is divisible by 5 or not.

//Input : 12		Output : 12 Not Divide by 5
//Input : 35		Output : 90 Divide by 5


#include<iostream>
using namespace std;

class Code
{
    public :
        int iNo;

    Code()
    {
        iNo = 0;
    }
    Code(int iValue)
    {
        iNo = iValue;
    }
    int Check()
    {
        if(iNo % 5 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number :";
    cin>>iValue;

    Code obj(iValue);

    bRet = obj.Check();
    if(bRet == true)
    {
        cout<<iValue<<" divide by 5";
    }
    else
    {
        cout<<iValue<<" not divide by 5"; 
    }
    return 0;
}