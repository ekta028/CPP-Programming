//Accept character from user and check whether it is special symbol or not

//Input : %     Output : % is special symbol
//Input : d     Output : d is not special symbol


#include<iostream>
using namespace std;

class Code
{
    public :
        char ch;

    Code()
    {
        ch = '\0';
    }
    Code(char cValue)
    {
        ch = cValue;
    }
    bool ChkSpecial()
    {
        if(ch >= 33 && ch <= 47)
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
    char cValue = '\0';
    bool bRet = 0;

    cout<<"Enter the character : ";
    cin>>cValue;

    Code obj(cValue);

    bRet = obj.ChkSpecial();
    if(bRet == true)
    {
        cout<<cValue<<" is special character";
    }
    else
    {
        cout<<cValue<<" is not special chaaracter";
    }
}