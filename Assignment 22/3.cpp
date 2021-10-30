//Accept character from user.If it is capital then diplay all the characters from the input characters till Z.If input character is small then print all the characters in reverse order till a.In other cases return directly.

//Input : Q     Output : Q R S T U V W X Y Z
//Input : m     Output : m l k j i h g f e d c b a


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
        char cCnt = '\0';

        if(ch >= 'A' && ch <= 'Z')
        {
            for(cCnt = ch ; cCnt <= 'Z' ; cCnt++)
            {
                cout<<cCnt<<"\t";
            }
        }
        else
        if(ch >= 'a' && ch <= 'z')
        {
            for(cCnt = ch ; cCnt >= 'a' ; cCnt--)
            {
                cout<<cCnt<<"\t";
            }
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