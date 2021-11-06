//Write a program which accept string from user and display it in reverse order

//Input : "Marvellous"     Output : suollevraM


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

    void Reverse()
    {
        char *ptr = str;

        int iCount = 0;

        while(*ptr != 0)
        {
            iCount++;
            ptr++;
        }
        iCount--;
        ptr--;

        while(iCount >= 0)
        {
            cout<<*ptr;
            iCount--;
            ptr--;
        }
        
    }
};

int main()
{
    Code obj;
    obj.Accept();
    obj.Reverse();

    return 0;
}