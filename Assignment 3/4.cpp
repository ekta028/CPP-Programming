//Accept one character from user and convert case of that character

//Input : a     Output : A
//Input : D     Output : d


#include<iostream>
using namespace std;

class Code
{
    public :
        char ch , ch1 , ch2;

    Code()
    {
        ch = '\0';
    }
    Code(char cValue)
    {
        ch = cValue;
    }
    char DisplayConvert()
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            ch1 = ch + 32;
            cout<<ch1<<"\n";
        }
        else
        if(ch >= 'a' && ch <= 'z')
        {
            ch2 = ch - 32;
            cout<<ch2<<"\n";
        }
    }
};

int main()
{
    char cValue = 0;

    cout<<"Enter Character : ";
    cin>>cValue;

    Code obj(cValue);
    obj.DisplayConvert();

    return 0;
}