//Accept character from user.If character is small display its corresponding capital characters,and if it Capital then display its corresponding small characters,in other cases display as it is

//Input : Q     //Output : q
//Input : m     //Output : M


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
    void Display()
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            cout<<char(ch + 32)<<"\n";
        }
        else
        if(ch >= 'a' && ch <= 'z')
        {
            cout<<char(ch - 32)<<"\n";
        }
        else
        {
            cout<<ch<<"\n";
        }
    }
};

int main()
{
    char cValue = '\0';

    cout<<"Enter the value : ";
    cin>>cValue;

    Code obj(cValue);
    obj.Display();

    return 0;
}