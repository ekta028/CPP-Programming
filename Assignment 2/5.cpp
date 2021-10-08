//Accept number from user and check whether number is even or odd

//Input : 12        //Output : 12 is Even
//Input : 45        //Output : 45 is Odd


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
        if(iNo % 2 == 0)
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

    cout<<"Enter number : ";
    cin>>iValue;

    Code obj(iValue);

    bRet = obj.Check();
    if(bRet == true)
    {
        cout<<iValue<<" is Even"<<"\n";
    }
    else
    {
        cout<<iValue<<" is Odd"<<"\n";
    }

    return 0;
}