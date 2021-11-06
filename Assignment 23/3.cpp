//Write a program which accept string from user and return difference between frequency of capital characters and frequency of small characters

//Input : "Marvellous Multi OS"     Output : -9 (13 - 4)


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

    int CountCapital()
    {
        char *ptr = str;

        int iCCount = 0 , iSCount = 0;

        while(*ptr != 0)
        {
            if(*ptr >= 'A' && *ptr <= 'Z')
            {
                iCCount++;
            }
            else
            if(*ptr >= 'a' && *ptr <= 'z')
            {
                iSCount++;
            }
            ptr++;
        }
        return iCCount - iSCount;
    }
};

int main()
{
    int iRet = 0;

    Code obj;

    obj.Accept();
    iRet = obj.CountCapital();
    cout<<"Count of Capital letters is : "<<iRet<<endl;

    return 0;
}