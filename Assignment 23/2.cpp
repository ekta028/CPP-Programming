//Write a program which accept string from user and return count of small characters

//Input : "Marvellous Multi OS"     Output : 13


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

    int CountSmall()
    {
        char *ptr = str;

        int iCount = 0;

        while(*ptr != 0)
        {
            if(*ptr >= 'a' && *ptr <= 'z')
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
    iRet = obj.CountSmall();
    cout<<"Count of Small letters is : "<<iRet<<endl;

    return 0;
}