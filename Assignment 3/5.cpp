//Accept one character from user and check whether that character is vowel or not

//Input : E / e    Output : E is Vowel
//Input : D / d    Output : D is not Vowel


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
    bool Check()
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
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

    cout<<"Enter Character : ";
    cin>>cValue;

    Code obj(cValue);

    bRet = obj.Check();
    if(bRet == true)
    {
        cout<<cValue<<" is vowel"<<"\n";
    }
    else
    {
        cout<<cValue<<" is not vowel"<<"\n";
    }
    return 0;
}