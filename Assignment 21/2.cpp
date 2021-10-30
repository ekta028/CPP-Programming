//Accept character from user and check whether it is capital or not

//Input : F     Output : F is capital
//Input : f     Output : f is not capital


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
        if(ch >= 'A' && ch <= 'Z')
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
        cout<<cValue<<" is capital";
    }
    else
    {
        cout<<cValue<<" is not capital";
    }
    
}