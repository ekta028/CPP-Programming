//Accept character from user and check whether it is alphabet or not

//Input : F     Output : F is alphabet
//Input : f     Output : f is alphabet
//Input : &     Output : & is not alphabet


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
        if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
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
        cout<<cValue<<" is alphabet";
    }
    else
    {
        cout<<cValue<<" is not alphabet";
    }
    
}