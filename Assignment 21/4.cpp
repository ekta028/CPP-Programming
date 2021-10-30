//Accept character from user and check whether it is small case or not

//Input : F     Output : F is not small case
//Input : f     Output : f is small case


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
    bool ChkSmall()
    {
        if(ch >= 'a' && ch <= 'z')
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

    bRet = obj.ChkSmall();
    if(bRet == true)
    {
        cout<<cValue<<" is small case";
    }
    else
    {
        cout<<cValue<<" is not small case";
    }
    
}