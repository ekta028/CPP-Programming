//Write a program which accept string from user and return count of capital characters

//Input : "Marvellous Multi OS"     Output : 4


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

        int iCount = 0;

        while(*ptr != 0)
        {
            if(*ptr >= 'A' && *ptr <= 'Z')
            {
                iCount++;
            }
            ptr++;
        }
        return iCount;
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