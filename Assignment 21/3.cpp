//Accept character from user and check whether it is digit or not(0-9)

//Input : F     Output : F is not digit
//Input : 6     Output : 6 is digit


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
    bool ChkAlpha()
    {
        if(ch >= 48 && ch <= 57)
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
    bool bRet = false;

    cout<<"Enter the character : ";
    cin>>cValue;

    Code obj(cValue);

    bRet = obj.ChkAlpha();
    if(bRet == true)
    {
        cout<<cValue<<" is digit";
    }
    else
    {
        cout<<cValue<<" is not digit";
    }
    
}