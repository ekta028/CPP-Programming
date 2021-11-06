//Write a program which accept string from user and check whether the string contains vowels in it or not

//Input : "Marvellous Multi OS"     Output : String contains vowel


#include<iostream>
using namespace std;

class Code
{
    public :
        char str[30];

    void Accept()
	{
		char string;
		cout<<"Enter String : ";
		scanf("%[^'\n']s",str);
	}

    bool ChkVowel()
    {
        char *ptr = str;

        int iCount = 0;

        while(*ptr != 0)
        {
            if(*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            {
                iCount++;
                break;
            }
            ptr++;
        }
        if(iCount == 1)
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
    bool bRet = false;

    Code obj;

    obj.Accept();
    bRet = obj.ChkVowel();
    if(bRet == true)
    {
        cout<<"String contains vowels";
    }
    else
    {
        cout<<"String not contains vowels";
    }

    return 0;
}