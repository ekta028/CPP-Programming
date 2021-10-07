//Write a program to print 5 to 1 numbers on screen


#include<iostream>
using namespace std;

class Code
{
    public :
        int iCnt;

    void Display()
    {
        for(iCnt = 5 ; iCnt >= 1 ; iCnt--)
        {
            cout<<iCnt<<"\t";
        }
    }
};

int main()
{
    Code obj;
    obj.Display();

    return 0;
}